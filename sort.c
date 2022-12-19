/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:48:21 by yasingunay        #+#    #+#             */
/*   Updated: 2022/12/15 17:54:02 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three (t_data **a)
{
	int	i;
	int	j;
	int	k;

	i = (*a)->value;
	j = (*a)->link->value;
	k = (*a)->link->link->value;

	if(i > j && i < k && j <k)
		ft_sa(a);
	else if(i > j && i > k && j < k)
		ft_ra(a);
	else if(i < j && i > k && j > k)
		ft_rra(a);
	else if(i < j && i <k && j > k)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if(i > j && i > k && j > k)
	{
		ft_sa(a);
		ft_rra(a);
	}

}


