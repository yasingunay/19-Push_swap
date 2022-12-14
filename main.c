/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/14 10:54:54 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int ac, char **av)
{
	t_data *a;

	if (ac < 2)
		return (0);
	if (ac == 2)
		av = ft_split(av[1],' ');
	a = create_list(ac,av);
	
	dup_check(a);
	if(is_sorted(a) == 1)
		return (0);
	
	if(lstsize(a)== 2)
		ft_sa(&a);
	else
	{
		if(lstsize(a)== 3)
			sort_three(&a);
		
	}
		
	print_list(a);
	
	//system("leaks push_swap");
	exit(0);
	return (0);

}
