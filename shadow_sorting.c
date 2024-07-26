#include "push_swap.h"

t_stack    *shadow_sorting(t_stack *a)
{
    int *temp_arr;
    int ind_stack;
    int ind_arr;

    if (!(temp_arr = copy_arr(a)))
        return (NULL);
    if (merge_sort(&temp_arr, 0, a->ind_top) == -1)
        return (free(temp_arr), NULL);
    ind_stack = -1;
    while (++ind_stack <= a->ind_top)
    {
        ind_arr = -1;
        while (++ind_arr <= a->ind_top)
        {
            if (a->arr[ind_stack].num == temp_arr[ind_arr])
            {
                a->arr[ind_stack].sort_ind = a->size - ind_arr - 1;
                break ;
            }
        }
    }
    return (free(temp_arr), a);
}

int *copy_arr(t_stack *a)
{
    int *ret_arr;
    int ind;

    ret_arr = (int *) malloc(sizeof(int) * a->size);
    if (!ret_arr)
        return (NULL);
    ind = 0;
    while (ind <= a->ind_top)
    {
        ret_arr[ind] = a->arr[ind].num;
        ind++;
    }
    return (ret_arr);
}

int    merge_sort(int **arr, int l_ind, int r_ind)
{
    int mid_ind;

    if (l_ind < r_ind)
    {
        mid_ind = l_ind + (r_ind - l_ind) / 2;
        merge_sort(arr, l_ind, mid_ind);
        merge_sort(arr, mid_ind + 1, r_ind);
        if (merge(arr, l_ind, r_ind) == -1)
            return (-1);
    }
    return (0);
}

int    merge(int **arr, int l_ind, int r_ind)
{
    int lp_ind;
    int *temp_arr;
    int temp_ind;

    temp_arr = (int *) malloc(sizeof(int) * (r_ind - l_ind + 1));
    if (!temp_arr)
        return (-1);
    merge_in_temp(arr, &temp_arr, l_ind, r_ind);
    temp_ind = 0;
    lp_ind = l_ind;
    while (lp_ind <= r_ind)
        (*arr)[lp_ind++] = temp_arr[temp_ind++];
    return (free(temp_arr), 0);
}

void    merge_in_temp(int **arr, int **temp_arr, int l_ind, int r_ind)
{
    int lp_ind;
    int rp_ind;
    int temp_ind;
    int mid_ind;

    lp_ind = l_ind;
    mid_ind = l_ind + (r_ind - l_ind) / 2;
    rp_ind = mid_ind + 1;
    temp_ind = 0;
    while (lp_ind < mid_ind + 1 && rp_ind < r_ind + 1 && 
            temp_ind < r_ind - l_ind + 1)
    {
        if ((*arr)[lp_ind] < (*arr)[rp_ind])
            (*temp_arr)[temp_ind++] = (*arr)[lp_ind++];
        else
            (*temp_arr)[temp_ind++] = (*arr)[rp_ind++];
    }
    while (lp_ind < mid_ind + 1)
        (*temp_arr)[temp_ind++] = (*arr)[lp_ind++];
    while (rp_ind < r_ind + 1)
        (*temp_arr)[temp_ind++] = (*arr)[rp_ind++];
    return ;
}