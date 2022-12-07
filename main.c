/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/07 17:42:58 by ygunay           ###   ########.fr       */
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


	int arg_number(char **av)
	{
		int i;
		int size;

		i = 0;
		size =0 ;
		while(av[i])
			i++;
		size = i;
		printf("argument number %d\n",size);
		return (size);
	}

	void dup_check(char **av)
	{
	 int i;
	 i = 1;
	
	 int j;
	 
		while(av[i] != NULL)
			{	
				j=1;
				while(av[i +j] != NULL)
				{
					if(ft_atoi(av[i])== ft_atoi(av[i + j]))
						ft_error("duplicated number\n");
					
					j++;
				}
				i++;
			}
		
	}

int	main(int ac, char **av)
{
	t_data	*stack_a;
	int i = 2;

	if (ac < 2)
		return (0);
	
	stack_a = (t_data *)malloc(sizeof(t_data));
	stack_a->value = ft_atoi(av[1]);
	stack_a->link = NULL;
	while(av[i])
	{
		add_at_end(stack_a,ft_atoi(av[i]),(arg_number(av) - 2));
		i++;
	}
	dup_check(av);	
	ft_printf("%d\n", stack_a->link->link->value);

	//system("leaks push_swap");
	exit(0);
	return (0);
}


