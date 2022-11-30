/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:53:24 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/26 17:02:36 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int		main(void)
// {
// 	int		fd;

// 	fd = 2;
// 	ft_putchar_fd('a', fd);
// 	ft_putchar_fd('\n', fd);
// 	return (0);
// }