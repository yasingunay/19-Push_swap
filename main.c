/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/16 16:12:42 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*a;
	t_data	*b;

	b = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	check_errors(ac, av);
	a = create_list(ac, av);
	fill_index(&a);
	dup_check(a);
	if (is_sorted(a) == 1)
		return (0);
	sort_list(&a, &b);
	print_list(a);
	free_stack(a);
	free_stack(b);
	//system("leaks push_swap");
	return (0);
}

// void	print_list(t_data *a)
// {
// 	t_data	*ptr;

// 	if (a == NULL)
// 		ft_error("list is empty");
// 	ptr = a;
// 	while (ptr != NULL)
// 	{
// 		ft_printf("%d ", ptr->value);
// 		ptr = ptr->link;
// 	}
// }
