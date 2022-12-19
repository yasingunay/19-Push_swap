/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:14:30 by yasingunay        #+#    #+#             */
/*   Updated: 2022/12/19 16:56:18 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_data *a)
{
	int temp;
	
	if(!a || !a->link)
		return ;
	temp = a->link->value;
	a->link->value = a->value;
	a->value = temp;
}



void ft_rotate(t_data **a)
{
	t_data *tmp;
	t_data *first;

	if(!a || !(*a)->link)
		return ;
	first = *a;
	*a = (*a)->link;
	tmp = *a;
	while(tmp->link)
		tmp = tmp->link;
	tmp->link = first;
	tmp->link->link =NULL;
}

void ft_reverse_rotate(t_data **a)
{
	t_data *tmp;
	t_data *last;

	if(!a || !(*a)->link)
		return ;
	tmp = *a;
	while(tmp->link->link)
		tmp = tmp->link;
	last = tmp->link;
	tmp->link = NULL;
	last->link = *a;
	*a = last;
	
}

void ft_push(t_data **a, t_data **b)
{
	t_data *tmp;
	if(!a || !*a)
		return;
	tmp = *a;
	*a = (*a)->link;
	tmp->link = *b;
	*b = tmp;
	
}
 

void	ft_pb(t_data **a, t_data **b)
{
	ft_push(a, b);
	write(1, "pb\n", 3);
}

void	ft_pa(t_data **a, t_data **b)
{
	ft_push(b, a);
	write(1, "pa\n", 3);
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


void ft_rra(t_data **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
	
}