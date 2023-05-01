#include "push_swap.h"

void	ft_swap(int *ptr, int top, char array_to_be_swap)
{
	if (!ptr)
	{
		free(ptr);
		return ;
	}
	int temp = ptr[top];
	ptr[top] = ptr[top - 1];
	ptr[top - 1] = temp;
	if (array_to_be_swap == 'a')
		printf("sa");
	else
		printf("sb");
}