/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:11:20 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/26 17:28:48 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

// int main(void)
// {
// 	char str[]="yasin";
// 	ft_putstr_fd(str,2);
// 	return (0);
// }

// int		main(void)
// {
// 	char	s[] = "Hello world!";
// 	int		fd;

// 	fd = 1;
// 	ft_putstr_fd(s, fd);
// 	ft_putstr_fd("\n", fd);
// 	return (0);
// }