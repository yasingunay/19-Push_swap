/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/13 15:56:18 by ygunay           ###   ########.fr       */
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


void	fill_index(t_data **a)
{
	t_data	*first;
	t_data	*cp_a;
	int		i;

	first = *a;
	cp_a = *a;
	while (*a)
	{
		cp_a = first;
		i = 0;
		while (cp_a)
		{
			if ((*a)->value > cp_a->value)
				i++;
			if ((*a)->index != i)
				(*a)->index = i;
			if (!cp_a->link)
				break ;
			cp_a = cp_a->link;
		}
		*a = (*a)->link;
	}
	*a = first;
}




void	ft_radix(t_data **a, t_data **b)
{
	t_data	*num;
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = lstsize(*a);
	max_bits = 0;
	while ((len - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			num = *a;
			if (((num->index >> i) & 1) == 1)
				ft_ra(a);
			else
				ft_pb(a, b);
		}
		while (*b)
			ft_pa(a, b);
	}
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
	

	else if(lstsize(a)> 5)
	{
		fill_index(&a);	
		ft_radix(&a,&b);
		
	}
		
		
	//print_list(a);
	
	
	//system("leaks push_swap");
	exit(0);
	return (0);

}
