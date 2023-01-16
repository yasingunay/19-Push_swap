/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:48:21 by yasingunay        #+#    #+#             */
/*   Updated: 2023/01/16 14:01:04 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_data **a)
{
	int	i;
	int	j;
	int	k;

	i = (*a)->value;
	j = (*a)->link->value;
	k = (*a)->link->link->value;
	if (i > j && i < k && j < k)
		ft_sa(a);
	else if (i > j && i > k && j < k)
		ft_ra(a);
	else if (i < j && i > k && j > k)
		ft_rra(a);
	else if (i < j && i < k && j > k)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (i > j && i > k && j > k)
	{
		ft_sa(a);
		ft_rra(a);
	}
}

void	move_smallest_to_b(t_data **a, t_data **b)
{	
	int	i;

	i = find_index(*a, smallest_number(*a));
	if (i >= 3)
	{
		while ((*a)->value != smallest_number(*a))
			ft_rra(a);
	}
	else
	{
		while ((*a)->value != smallest_number(*a))
			ft_ra(a);
	}
	ft_pb(a, b);
}

void	sort_list(t_data **a, t_data **b)
{
	int	size;

	size = lstsize(*a);
	if (size == 2)
		ft_sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
	{
		move_smallest_to_b(a, b);
		sort_three(a);
		ft_pa(a, b);
	}
	else if (size == 5)
	{
		move_smallest_to_b(a, b);
		move_smallest_to_b(a, b);
		sort_three(a);
		ft_pa(a, b);
		ft_pa(a, b);
	}
	else if (size > 5)
		ft_radix(a, b);
}
