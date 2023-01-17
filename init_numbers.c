/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:33 by yasingunay        #+#    #+#             */
/*   Updated: 2023/01/17 10:03:26 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*create_list(int ac, char **av)
{
	t_data	*a;
	int		row;

	row = 1;
	if (ac == 2)
		row = row -1;
	a = (t_data *)malloc(sizeof(t_data));
	a->value = ft_atoi(av[row]);
	a->link = NULL;
	row++;
	while (av[row])
	{
		add_at_end(a, ft_atoi(av[row]));
			row++;
	}
	return (a);
}

void	add_at_end(t_data *a, int data)
{
	t_data	*ptr;
	t_data	*temp;

	if (a == NULL)
		ft_error();
	ptr = a;
	temp = (t_data *)malloc(sizeof(t_data));
	temp ->value = data;
	temp ->link = NULL;
	while (ptr->link != NULL)
		ptr = ptr->link;
	ptr->link = temp;
}
