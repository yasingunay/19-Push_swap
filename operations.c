/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:14:30 by yasingunay        #+#    #+#             */
/*   Updated: 2022/12/13 13:20:39 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_data *a)
{
	int temp;
	temp = 0;
	temp = a->link->value;
	a->link->value = a->value;
	a->value = temp;
	//print_list(a);
}

void ft_sb(t_data *b)
{
	int temp;
	temp = 0;
	temp = b->link->value;
	b->link->value = b->value;
	b->value = temp;
	write(1,"sa\n",3);
	//print_list(b);
}


void ft_rotate(t_data **a)
{
	t_data *tmp;
	t_data *first;

	first = *a;
	*a = (*a)->link;
	tmp = *a;
	while(tmp->link)
		tmp = tmp->link;
	tmp->link = first;
	tmp->link->link =NULL;
}
 
void	ft_ra(t_data **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	ft_sa(t_data **a)
{
	ft_swap(*a);
	write(1, "sa\n", 3);
}