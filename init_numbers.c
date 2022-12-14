/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:33 by yasingunay        #+#    #+#             */
/*   Updated: 2022/12/14 10:53:58 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data* create_list(int ac, char **av)
{
	int row;

	row = 1;
	if(ac == 2)
		row = row -1;
		
	t_data *a;
	a = (t_data *)malloc(sizeof(t_data));
	a->value = ft_atoi(av[row]);
	a->link = NULL;
	row++;
			
			while(av[row])
			{
				add_at_end(a,ft_atoi(av[row]));
				
				row++;
			}

	return (a);
}

void add_at_end(t_data *a, int data)
{
	if (a == NULL)
		ft_error("list is empty");
	
	t_data *ptr = NULL;
	t_data *temp = NULL;

	ptr = a;
	temp = (t_data *)malloc(sizeof(t_data));
	temp ->value = data;
	temp ->link = NULL;
	
	while(ptr->link != NULL)
		ptr = ptr->link;
			
	ptr->link = temp;
	
}

void	dup_check(t_data *a)
{
	t_data	*new;
	int		dup;

	while (a)
	{
		dup = 0;
		new = a;
		while (new)
		{
			if (a->value == new->value)
				dup++;
			if (dup == 2)
				ft_error("duplicated number\n");
			new = new->link;
		}
		a = a->link;
	}
}

