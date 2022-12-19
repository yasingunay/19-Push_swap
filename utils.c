/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:31:12 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/19 16:48:09 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *error)
{
	write (2, "Error\n", 6);
	write (2, error, ft_strlen (error));
	//system("leaks push_swap");
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

void print_list(t_data *a)
{
	if (a == NULL)
		ft_error("list is empty");
	t_data *ptr = NULL;
	ptr = a;
	while(ptr != NULL)
	{
		ft_printf("%d ",ptr->value);
		ptr = ptr->link;
	}
}

void check_errors(int ac, char **av)
{
	int j;
	char c;
	int row;

	row = 1;
	if(ac == 2)
		row = row -1;
	
	while(av[row])
	{
		j = 0;
		while(av[row][j])
		{
			c = av[row][j];
			
			if(ft_isdigit(c)  != 1)
				ft_error("Not digit\n");
			else
				j++;
		}
		row++;
	}
}

// int biggest_number(t_data *a)
// {
// 	int big;

// 	big = 0;

// 	big = a->value;
// 	while(a)
// 	{
// 		if(a->value > big)
// 			big = a->value;
// 		a = a->link;
// 	}
	
// 	return(big);
// }

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