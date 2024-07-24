#include "push_swap.h"

int find_num_chunk_from_bot(t_stack **a, int num_chunk)
{
    int ind;
    int limit_ind;

    ind = 0;
    limit_ind = 10 * num_chunk;
    while (ind < (*a)->size)
    {
        if ((*a)->arr[ind].sort_ind >= limit_ind
            && (*a)->arr[ind].sort_ind < limit_ind + 10)
            return (ind);
        ind++;
    }
    return (ind);
}

int find_num_chunk_from_top(t_stack **a, int num_chunk)
{
    int ind;
    int limit_ind;

    ind = (*a)->ind_top;
    limit_ind = 10 * num_chunk;
    while (ind >= 0)
    {
        if ((*a)->arr[ind].sort_ind >= limit_ind
            && (*a)->arr[ind].sort_ind < limit_ind + 10)
            return (ind);
        ind--;
    }
    return (ind);
}
