/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:31:12 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/16 16:06:43 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *error)
{
	write (2, "Error\n", 6);
	write (2, error, ft_strlen (error));
	exit(1);
}

int	lstsize(t_data *a)
{
	int		size;
	t_data	*ptr;

	if (a == NULL)
		ft_error("list is empty\n");
	size = 0;
	ptr = a;
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->link;
	}
	return (size);
}

int	smallest_number(t_data *a)
{
	int	small;

	small = 0;
	small = a->value;
	while (a)
	{
		if (a->value < small)
			small = a->value;
		a = a->link;
	}
	return (small);
}

int	find_index(t_data *head, int nb)
{
	int		index;
	t_data	*current;

	index = 1;
	current = head;
	while (current != NULL)
	{
		if (current->value == nb)
			return (index);
		index++;
		current = current->link;
	}
	return (-1);
}

t_data	*free_stack(t_data *stack)
{
	t_data	*tmp;

	while (stack)
	{
		tmp = stack;
		tmp = stack->link;
		free(stack);
		stack = tmp;
	}
	return (0);
}
