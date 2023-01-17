/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:49:39 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/17 16:50:40 by ygunay           ###   ########.fr       */
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

// void	check_errors(int ac, char **av)
// {
// 	int		j;
// 	char	c;
// 	int		row;

// 	row = 1;
// 	if (ac == 2)
// 		row = row -1;
// 	while (av[row])
// 	{
// 		j = 0;
// 		while (av[row][j])
// 		{
// 			c = av[row][j];
// 			if (ft_isdigit(c) != 1 || c == '$')
// 			{
// 				write(2, "k", 1);
// 				ft_error();
// 			}
// 			else
// 				j++;
// 		}
// 		row++;
// 	}
// }

void	check_errors(int ac, char **av)
{
	int	i;
	int	j;

	if (ac >= 2)
	{
		i = 1;
		while (av[i] != NULL)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				if (ft_isdigit(av[i][j]) != 1)
					ft_error();
				j++;
			}
			i++;
		}
	}	
}
