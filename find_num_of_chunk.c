#include "push_swap.h"

int find_num_chunk_from_bot(t_stack **a, int num_chunk, int size_chunk)
{
    int ind;
    int limit_ind;

    ind = 0;
    limit_ind = size_chunk * num_chunk;
    while (ind < (*a)->size)
    {
        if ((*a)->arr[ind].sort_ind >= limit_ind
            && (*a)->arr[ind].sort_ind < limit_ind + size_chunk)
            return (ind);
        ind++;
    }
    return (ind);
}

int find_num_chunk_from_top(t_stack **a, int num_chunk, int size_chunk)
{
    int ind;
    int limit_ind;

    ind = (*a)->ind_top;
    limit_ind = size_chunk * num_chunk;
    while (ind >= 0)
    {
        if ((*a)->arr[ind].sort_ind >= limit_ind
            && (*a)->arr[ind].sort_ind < limit_ind + size_chunk)
            return (ind);
        ind--;
    }
    return (ind);
}

void    prepare_a_for_chunk(t_stack **a, int num_chunk, int size_chunk)
{
    int ind_a;
    int search_val;

    if (!num_chunk)
        return ;
    search_val = size_chunk * num_chunk - 1;
    ind_a = (*a)->ind_top + 1;
    while (--ind_a >= 0)
        if ((*a)->arr[ind_a].sort_ind == search_val)
            break ;
    if (ind_a >= (*a)->ind_top / 2)
    {
        while (ind_a++ != (*a)->ind_top)
            ra(a, 1);
    }
    else
    {
        while (ind_a-- >= 0)
            rra(a, 1);
    }
    return ;
}