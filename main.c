/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/08 13:58:41 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

int count_ac(char **av)
{
	int i = 0;
	while(av[i])
		i++;
	return (i);
}


void add_at_end(t_data *a, int data)
{
	if (a == NULL)
		ft_error("list is empty");
	
	t_data *ptr = NULL;
	t_data *temp = NULL;

	ptr = a;
	temp = (t_data *)malloc(sizeof(t_data));
	
	temp ->value = data;
	
	temp ->link = NULL;
	
	while(ptr->link != NULL)
		ptr = ptr->link;
			
	ptr->link = temp;
	
}

int main(int ac, char **av)
{
	
	if (ac < 2)
		return (0);
		
	t_data *a; 
	
	if (ac == 2)
	{
		int size = 0;
		char **args;
		args = ft_split(av[1],' ');
		size = count_ac(args);
		a = (t_data *)malloc(sizeof(t_data) * size);
		
		a->value = ft_atoi(args[0]);
		a->link = NULL;
		int i = 1;
			
		while(args[i])
		{
			add_at_end(a,ft_atoi(args[i]));
				
			i++;
		}
		//printf("%d\n",ft_atoi(args[1]));
		dup_check(args);
		print_list(a);
			
	}
	if (ac > 2)
	{
		int size = 0;
		size = count_ac(av);
		a = (t_data *)malloc(sizeof(t_data) * (size -1));
		a->value = ft_atoi(av[1]);
		a->link = NULL;
		int i = 2;
			
			while(av[i])
			{
				add_at_end(a,ft_atoi(av[i]));
				
				i++;
			}
			dup_check(av);
			print_list(a);
		
	}
	
	system("leaks push_swap");
	exit(0);
	return (0);

}