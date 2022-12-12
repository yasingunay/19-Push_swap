/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/12 17:24:21 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void print_list(t_data *a)
{
	if (a == NULL)
		ft_error("list is empty");
	t_data *ptr = NULL;
	ptr = a;
	while(ptr != NULL)
	{
		printf("%d ",ptr->value);
		ptr = ptr->link;
	}
}


// void sort_three (t_data *a)
// {
// 	int big = biggest_number(a);
// 	int small = smallest_number(a);

// 	while(!is_sorted(a))
// 	{
// 		if(a->value = big)
						
			
// 	}	
// }


int main(int ac, char **av)
{
	t_data *a;
	//t_data *b;
	//int biggest = 0;
	//int smallest = 0;
	if (ac < 2)
		return (0);
	if (ac == 2)
		av = ft_split(av[1],' ');
	a = create_list(ac,av);
	
	dup_check(a);
	if(is_sorted(a) == 1)
		return (0);
	
	if(lstsize(a)== 2)
		ft_sa(a);
	else
	{
		if(lstsize(a)>= 3)
		//smallest = 	smallest_number(a);
		//printf("smallest : %d\n", smallest);
		//printf("ikiden buyuk\n");
		ft_ra(a);
		
	}
		
	
	
	//printf("list size %d\n",lstsize(a));
	//system("leaks push_swap");
	exit(0);
	return (0);

}










