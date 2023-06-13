#include "ps.h"

void four_sort(t_node **a, t_node **b, t_node **tail_a)
{
    push(a, b, 'a');
    three_sort(a, tail_a);
    push(a, b, 'b');

    if ((*a)->data > (*tail_a)->data)
    {
        rotate(a, tail_a);
        return ;
    }
    if ((*a)->data > (*a)->next->data)
        swap(a);
    if ((*a)->next->data > (*a)->next->next->data)
    {
        push(a, b, 'a');
        swap(a);
        push(a, b, 'b');
    }
    return ;
}

void five_sort(t_node **a, t_node **b, t_node **tail_a, int length)
{
    int smallest;
    t_node *temp_a;

    temp_a = *a;
    if (length == 4)
    {
        four_sort(a, b, tail_a);
        return ;
    }
    else
    {
        smallest = temp_a->data;
        while (length-- > 0)
        {
            if (smallest > temp_a->data)
                smallest = temp_a->data;
            temp_a = temp_a->next;
        }
        if ((*tail_a)->data == smallest || (*tail_a)->prev->data == smallest)
        {
            while ((*a)->data != smallest)
                reverse_rotate(a, tail_a);
        }
        else
        {
            while ((*a)->data != smallest)
            rotate(a, tail_a);
        }
        push(a, b, 'a');
        four_sort(a, b, tail_a);
        push(a, b, 'b');
    }
}

// if ((*tail_a)->data < (*tail_a)->prev->data
//             && (*tail_a)->data < (*a)->data)
//             reverse_rotate(a, tail_a);
//         if ((*a)->data > (*a)->next->data)
//         {
//             swap(a);
//             rotate(a, tail_a);
//         }
//         while ((*a)->data > (*tail_a)->data)
//         {
//             if ((*a)->data > (*a)->next->data 
//                 && (*a)->next->data > (*a)->next->next->data
//                 && (*a)->next->data > (*tail_a)->data)
//                 swap(a);
//             rotate(a, tail_a);
//         }
//         if ((*a)->next->data > (*tail_a)->data)
//         {
//             swap(a);
//             rotate(a, tail_a);
//         }
// else
//     {
//         if ((*tail_a)->data < (*tail_a)->prev->data
//             && (*tail_a)->data < (*a)->data)
//             reverse_rotate(a, tail_a);
//         if ((*a)->data > (*a)->next->data)
//         {
//             swap(a);
//             rotate(a, tail_a);
//         }
//         while ((*a)->data > (*tail_a)->data)
//         {
//             if ((*a)->data > (*a)->next->data 
//                 && (*a)->next->data > (*a)->next->next->data
//                 && (*a)->next->data > (*tail_a)->data)
//                 swap(a);
//             rotate(a, tail_a);
//         }
//         if ((*a)->next->data > (*tail_a)->data)
//         {
//             swap(a);
//             rotate(a, tail_a);
//         }
//         push(a, b, 'a');
//         // four_sort(a, b, tail_a);
//         push(a, b, 'a');
//         three_sort(a, tail_a);
//         while ((*b) != NULL)
//         {
//             push(a, b, 'b');
//             if ((*a)->data > (*tail_a)->data)
//                 rotate(a, tail_a);
//             else if ((*a)->data > (*a)->next->data)
//             {
//                 swap(a);
//                 while ((*a)->next->data > (*a)->next->next->data)
//                 {
//                     push(a, b, 'a');
//                     swap(a);
//                     if ((*b) != NULL)
//                         push(a, b, 'b');
//                 }
//             }
//         }
//     }
// }
