#ifndef PS_H
#define PS_H

# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_node {
    int             data;
    struct s_node   *next;
    struct s_node   *prev;
}   t_node;

int make_linked_list(t_node **head, char **value);

// function
void push(t_node **a, t_node **b, int a_or_b);
void rotate(t_node **head, t_node **tail);
void reverse_rotate(t_node **head, t_node **tail);
void swap(t_node **head);

// logic
void small_logic(t_node **head);
void three_sort(t_node **head, t_node **tail);
void five_sort(t_node **a, t_node **b, t_node **tail_a, int length);

// utils
int ft_isnum(char *data);
void check_if_correct_input(char **values);
t_node	*lstlast(t_node *lst);
void free_linked_list(t_node *head);
void quit(void);
void is_correct_order(t_node *head);

#endif