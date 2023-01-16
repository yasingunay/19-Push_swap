/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_shorts.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:10:46 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/16 14:53:40 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_rra(t_data **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}
