/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:14:30 by yasingunay        #+#    #+#             */
/*   Updated: 2022/12/12 17:26:32 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_data *a)
{
	int temp;
	temp = 0;
	temp = a->link->value;
	a->link->value = a->value;
	a->value = temp;
	write(1,"sa\n",3);
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

void ft_ra(t_data *a)
{
	t_data *first;
	t_data *second;
	t_data *last;


	first = a; 
	second = first->link;
	while(a->link)
		a = a->link;
	last = a;
	last->link = first;
	a = second;
	first->link = NULL;
	
	print_list(a);
	
	
	
	write(1,"ra\n",3);
	
	
}