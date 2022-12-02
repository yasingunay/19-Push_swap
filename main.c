/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/02 12:26:22 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


	void add_at_end(t_data *head, int number, int size)
	{
		t_data *ptr;
		t_data *temp;

		ptr = head;
		temp = (t_data *)malloc(sizeof(t_data) * size);
		temp->value = number;
		temp->link = NULL;
		
		while(ptr->link != NULL)
			ptr = ptr->link;
		ptr->link =temp;
	}


	int number_count(char **av)
	{
		int i;
		int size;

		i = 0;
		size =0 ;
		while(av[i])
			i++;
		size = i -1;
		//printf("%d\n",size);
		return (size);
	}



int	main(int ac, char **av)
{
	t_data	*stack_a;
	int i = 2;
	//t_data 	*current;

	// char	**args = NULL;

	if (ac < 2)
		return (0);
	// if (ac == 2)
	// {
	// 	args = ft_split(av[1],' ');
	// }
	
	stack_a = (t_data *)malloc(sizeof(t_data));
	stack_a->value = ft_atoi(av[1]);
	stack_a->link = NULL;
	while(av[i])
	{
		add_at_end(stack_a,ft_atoi(av[i]),number_count(av));
		i++;
	}
		

	// current = (t_data *)malloc(sizeof(t_data));
	// current->value = ft_atoi(av[2]);
	// current->link = NULL;
	// head->link = current;
	

	
	ft_printf("%d\n", stack_a->link->value);
	
	return (0);
}

