/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:21:37 by yasingunay        #+#    #+#             */
/*   Updated: 2022/12/08 13:06:38 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

// int count_ac(char **av)
// {
// 	int i = 0;
// 	while(av[i])
// 		i++;
// 	return (i);
// }


void add_at_end(t_data *a, int data)
{
	if (a == NULL)
		ft_error("list is empty");
	t_data *ptr = NULL;
	t_data *temp = NULL;

	temp = (t_data *)malloc(sizeof(t_data));
	while(ptr->link != NULL)
		ptr = ptr->link;
	ptr->link = temp;
	
}

int main(int ac, char **av)
{
	if (ac == 2)
		{
			t_data *a; 
			// int size;
			// size = count_ac(av);
			a = (t_data *)malloc(sizeof(t_data));
			a->value = av[1];
			a->link = NULL;
			int i = 1;
			char **args;
			args = ft_split(av[1],' ');
			
			int i = 2;
			while(args[i])
			{
				add_at_end(a,ft_atoi(args[i]));
				i++;
			}
			
		
		}		

	
	retun (0);

}