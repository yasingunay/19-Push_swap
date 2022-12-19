/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/19 17:13:06 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int ac, char **av)
{
	t_data *a;
	t_data *b;

	b = NULL;

	if (ac < 2)
		return (0);
	if (ac == 2)
		av = ft_split(av[1],' ');
	check_errors(ac ,av);
	a = create_list(ac,av);
	
	dup_check(a);
	if(is_sorted(a) == 1)
		return (0);
	
	if(lstsize(a)== 2)
		ft_sa(&a);
	else if(lstsize(a)== 3)
		sort_three(&a);
	else if(lstsize(a)== 4)
	{
		while(a->value != smallest_number(a))
			ft_ra(&a);
		ft_pb(&a, &b);
		sort_three(&a);
		ft_pa(&a,&b);
	}
	else if(lstsize(a)== 5)
	{
		while(a->value != smallest_number(a))
			ft_ra(&a);
		ft_pb(&a, &b);
		while(a->value != smallest_number(a))
			ft_ra(&a);
		ft_pb(&a, &b);
		sort_three(&a);
		ft_pa(&a,&b);
		ft_pa(&a,&b);
	}
		
		
	print_list(a);
	
	
	//system("leaks push_swap");
	exit(0);
	return (0);

}
