/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/23 12:01:17 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int find_index(t_data *head, int nb)
{
	int index = 1;
	t_data *current = head;
	while (current != NULL)
	{
		if(current->value == nb)
			return index;
		index++;
		current = current->link;
	}
	return (-1);
}

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
		int i = 0;
		i = find_index(a,smallest_number(a));
		if(i >= 3)
		{
			while(a->value != smallest_number(a))
				ft_rra(&a);
		}
		else
		{
			while(a->value != smallest_number(a))
				ft_ra(&a);
		}
		
		ft_pb(&a, &b);
		sort_three(&a);
		ft_pa(&a,&b);
	}
	else if(lstsize(a)== 5)
	{
		
		int i = 0;
		i = find_index(a,smallest_number(a));
		printf("index %d\n",i);
		if(i >= 3)
		{
			while(a->value != smallest_number(a))
				ft_rra(&a);
		}
		else
		{
			while(a->value != smallest_number(a))
				ft_ra(&a);
		}
		
		ft_pb(&a, &b);
		i = 0;
		i = find_index(a,smallest_number(a));
		if(i >= 3)
		{
			while(a->value != smallest_number(a))
				ft_rra(&a);
		}
		else
		{
			while(a->value != smallest_number(a))
				ft_ra(&a);
		}
		
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
