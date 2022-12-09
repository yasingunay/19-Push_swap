/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/09 15:15:46 by yasingunay       ###   ########.fr       */
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

t_data* create_list(int ac, char **av)
{
	int row;

	row = 1;
	if(ac == 2)
		row = row -1;
		
	t_data *a;
	a = (t_data *)malloc(sizeof(t_data));
	a->value = ft_atoi(av[row]);
	a->link = NULL;
	row++;
			
			while(av[row])
			{
				add_at_end(a,ft_atoi(av[row]));
				
				row++;
			}

	return (a);
}



void	dup_check(t_data *a)
{
	t_data	*new;
	int		dup;

	while (a)
	{
		dup = 0;
		new = a;
		while (new)
		{
			if (a->value == new->value)
				dup++;
			if (dup == 2)
				ft_error("duplicated number\n");
			new = new->link;
		}
		a = a->link;
	}
}

int is_sorted(t_data *a)
{
	while(a->link)
	{
		if(a->value > a->link->value)
			return (0);
		a = a->link;
	}
	
	return (1);
}

void ft_sa(t_data *a)
{
	int temp;
	temp = a->link->value;
	a->link->value = a->value;
	a->value = temp;
	write(1,"sa\n",3);
	//print_list(a);
}

int lstsize (t_data *a)
{
	int size;
	
	if(a == NULL)
		ft_error("list is empty\n");

	size =0;
	t_data *ptr;
	ptr = a;
	while(ptr != NULL)
	{
		size++;
		ptr = ptr->link;
	}
	return(size);
}

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
		ft_sa(a);
	else
		printf("ikiden buyuk\n");
	
	
	//print_list(a);
	
	
	
	printf("list size %d\n",lstsize(a));
	//system("leaks push_swap");
	exit(0);
	return (0);

}

