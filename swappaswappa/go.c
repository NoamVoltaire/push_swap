#include "push_swap_header.h"

void go(t_block **a, int *index, int n)
{
    if (*index == n)
        return;
    if (*index < n)
    {
        while (*index < n)
        {
            ra(a);
            *index = (*index + 1);
        }
    }
    else
    {
        while (*index > n)
        {
            rra(a);
            *index = (*index - 1);
        }
    }
    return;
}

int partition(t_block **a, t_block **b, int low, int high, int *index)
{
    int ipivot = low;
    go(a, index, low);
    int i = low;

    int pivot;
    pivot = (*a)->content;
    while (i <= high)
    {
        i++;
        if ((*a)->content < pivot)
        {
            (*index)++;
            ra(a);
            // (*a) = (*a)->next;
        }
        else
        {
            // printf("euuuuu\n");
            pa(a, b);
        }
    }
    // printf("swag\n");
	// ft_lstiter(a, print);
    ra(a);
    while ((*b) != NULL)
        pb(a, b);
    return *index;
}
