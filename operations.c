/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:14:30 by yasingunay        #+#    #+#             */
/*   Updated: 2023/01/16 14:11:14 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_data *a)
{
	int	temp;

	if (!a || !a->link)
		return ;
	temp = a->link->value;
	a->link->value = a->value;
	a->value = temp;
}

void	ft_rotate(t_data **a)
{
	t_data	*tmp;
	t_data	*first;

	if (!a || !(*a)->link)
		return ;
	first = *a;
	*a = (*a)->link;
	tmp = *a;
	while (tmp->link)
		tmp = tmp->link;
	tmp->link = first;
	tmp->link->link = NULL;
}

void	ft_reverse_rotate(t_data **a)
{
	t_data	*tmp;
	t_data	*last;

	if (!a || !(*a)->link)
		return ;
	tmp = *a;
	while (tmp->link->link)
		tmp = tmp->link;
	last = tmp->link;
	tmp->link = NULL;
	last->link = *a;
	*a = last;
}

void	ft_push(t_data **a, t_data **b)
{
	t_data	*tmp;

	if (!a || !*a)
		return ;
	tmp = *a;
	*a = (*a)->link;
	tmp->link = *b;
	*b = tmp;
}
