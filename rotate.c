#include "ps.h"

void rotate(t_node **head, t_node **tail)
{
    t_node *new_head;

    if (*head == NULL || (*head)->next == NULL)
        return;
    new_head = *head;
    *head = (*head)->next;
    (*tail)->next = new_head;
    *tail = new_head;
    new_head->next = NULL;
    ft_putstr_fd("ra\n", 1);
}

void reverse_rotate(t_node **head, t_node **tail)
{
    t_node *new_tail;

    if (*head == NULL || (*head)->next == NULL)
        return;
    new_tail = *tail;
    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    new_tail->prev = NULL;
    new_tail->next = *head;
    (*head)->prev = new_tail;
    *head = new_tail;
    ft_putstr_fd("rra\n", 1);
}
