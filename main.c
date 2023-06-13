#include "ps.h"
#include <stdio.h>

int main(int ac, char **av)
{
    t_node *a;
    t_node *b;
    t_node *tail;
    char **values;
    int length;

    a = NULL;
    b = NULL;
    if (ac == 2)
    {
        values = ft_split(av[1], ' ');
        check_if_correct_input(values);
        length = make_linked_list(&a, ft_split(av[1], ' '));
    }
    else if (ac > 2)
    {
        values = &av[1];
        check_if_correct_input(values);
        length = make_linked_list(&a, &av[1]);
    }
    else
    {
        ft_putstr_fd("Error, you have to implement this\n", 2);
        return (1);
    }
    tail = lstlast(a);
    is_correct_order(a);
    if (length == 2)
        small_logic(&a);
    else if (length == 3)
        three_sort(&a, &tail);
    else if (length == 4 || length == 5)
        five_sort(&a, &b, &tail, length);
    free_linked_list(a);
    // free_linked_list(b);
    return (0);
}






















// int main(int ac, char **av)
// {
//     t_node *a;

//     a = NULL;
//     if (ac == 2)
//     {
//         make_linked_list(&a, ft_split(av[1], ' '));
//         t_node *current = a;
//         while (current->next != NULL)
//         {
//             printf("%d", current->data);
//             current = current->next;
//         }
//         printf("%d\n", current->data);
//     }
//     else if (ac > 2)
//     {
//         ++av;
//         make_linked_list(&a, av);
//         t_node *current = a;
//         while (current->next != NULL)
//         {
//             printf("%d\n", current->data);
//             current = current->next;
//         }
//         printf("%d", current->data);
//     }
//     else
//         return 1;
//     free(a);
// }
