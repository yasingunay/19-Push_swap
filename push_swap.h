/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:31:50 by ygunay            #+#    #+#             */
/*   Updated: 2022/12/01 11:57:18 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../19-Libft/libft.h"
# include "../19-ft_printf/ft_printf.h"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647


typedef struct s_data
{
	int				value;
	int				index;
	struct s_node	*link;
}	t_data;



void	ft_error(char *error);

#endif
