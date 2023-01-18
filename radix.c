/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:56:59 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/18 16:58:19 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_index(t_data **a)
{
	t_data	*first;
	t_data	*cp_a;
	int		i;

	first = *a;
	cp_a = *a;
	while (*a)
	{
		cp_a = first;
		i = 0;
		while (cp_a)
		{
			if ((*a)->value > cp_a->value)
				i++;
			if ((*a)->index != i)
				(*a)->index = i;
			if (!cp_a->link)
				break ;
			cp_a = cp_a->link;
		}
		*a = (*a)->link;
	}
	*a = first;
}

void	ft_radix(t_data **a, t_data **b)
{
	t_data	*num;
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = lstsize(*a);
	max_bits = 0;
	while ((len - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			num = *a;
			if (((num->index >> i) & 1) == 1)
				ft_ra(a);
			else
				ft_pb(a, b);
		}
		while (*b)
			ft_pa(a, b);
	}
}
