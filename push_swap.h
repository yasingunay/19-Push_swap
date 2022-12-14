/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:31:50 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/14 11:46:20 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647


typedef struct s_data
{
	int				value;
	struct s_data	*link;
}	t_data;



void	ft_error(char *error);
void	ft_sb(t_data *b);
int		biggest_number(t_data *a);
int 	smallest_number(t_data *a);
int 	lstsize (t_data *a);
t_data* create_list(int ac, char **av);
void 	add_at_end(t_data *a, int data);
void	dup_check(t_data *a);
int 	is_sorted(t_data *a);
void 	print_list(t_data *a);
void 	ft_rotate(t_data **a);
void	ft_ra(t_data **a);
void	ft_sa(t_data **a);
void 	ft_swap(t_data *a);
void 	sort_three (t_data **a);
void 	ft_reverse_rotate(t_data **a);
void 	ft_rra(t_data **a);
void 	check_errors(int ac, char **av);

#endif
