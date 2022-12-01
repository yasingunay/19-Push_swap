/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/01 13:56:35 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int ac, char **av)
{
	t_data	*head;

	//char	**args;

	if (ac < 2)
		return (0);
	// if (ac == 2)
	// {
	// 	args = ft_split(av[1],' ');
	// }
	head = (t_data *)malloc(sizeof(t_data));
	head->value = ft_atoi(&av[1][0]);
	head->link = NULL;
	ft_printf("%d", head->value);
	return (0);
}
