/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:49:39 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/18 11:57:39 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_data *a)
{
	while (a->link)
	{	
		if (a->value > a->link->value)
			return (0);
		a = a->link;
	}	
	return (1);
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
				ft_error();
			new = new->link;
		}
		a = a->link;
	}
}
