#include "ps.h"

static void push_to_a(t_node **from, t_node **to)
{
    if ((*from)->next == NULL)
    {
        (*from)->next = *to;
        (*to)->prev = *from;
        *to = (*to)->prev;
        *from = NULL;
    }
    else
    {
        t_node *new_from_head;

        new_from_head = *from;
        *from = (*from)->next;
        (*from)->prev = NULL;
        new_from_head->next = *to;
        (*to)->prev = new_from_head;
        *to = (*to)->prev;
        (*to)->prev = NULL;
        // (*to)->next = NULL;
        // (*to)->prev = NULL;
    }
    ft_putstr_fd("pa\n", 1);
    return ;
}

static void push_to_b(t_node **from, t_node **to)
{
    t_node *new_from_head;

    new_from_head = *from;
    *from = (*from)->next;
    (*from)->prev = NULL;
    
    if (*to == NULL)
    {
        *to = new_from_head;
        (*to)->next = NULL;
        (*to)->prev = NULL;
    }
    else if ((*to)->prev == NULL)
    {
        (*to)->prev = new_from_head;
        new_from_head->next = *to;
        *to = (*to)->prev;
        (*to)->prev = NULL;
    }
    ft_putstr_fd("pb\n", 1);
}

void push(t_node **a, t_node **b, int a_or_b)
{
    if (a_or_b == 'a')
        push_to_b(a, b);
    else
        push_to_a(b, a);
    return ;
}
