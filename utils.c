/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:31:12 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/12 16:23:06 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *error)
{
	write (2, "Error\n", 6);
	write (2, error, ft_strlen (error));
	system("leaks push_swap");
	exit(1);
}


int lstsize (t_data *a)
{
	int size;
	
	if(a == NULL)
		ft_error("list is empty\n");

	size =0;
	t_data *ptr;
	ptr = a;
	while(ptr != NULL)
	{
		size++;
		ptr = ptr->link;
	}
	return(size);
}


int biggest_number(t_data *a)
{
	int big;

	big = 0;

	big = a->value;
	while(a)
	{
		if(a->value > big)
			big = a->value;
		a = a->link;
	}
	
	return(big);
}

int smallest_number(t_data *a)
{
	int small;

	small = 0;

	small = a->value;
	while(a)
	{
		if(a->value < small)
			small = a->value;
		a = a->link;
	}
	
	return(small);
}

int is_sorted(t_data *a)
{
	while(a->link)
	{
		if(a->value > a->link->value)
			return (0);
		a = a->link;
	}
	
	return (1);
}