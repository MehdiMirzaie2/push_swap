#include "ps.h"

void small_logic(t_node **head)
{
    if ((*head)->data > (*head)->next->data)
        swap(head);
    return ;
}
