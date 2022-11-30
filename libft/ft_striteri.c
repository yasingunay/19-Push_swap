/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:45:40 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/08 08:11:23 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	ft_make_big(unsigned int i, char *c)
// {
// 	printf("s[%d] is %c\n", i, c[0]);	
// 	if (c[0] >= 97 && c[0] <= 122)
// 			c[0] = c[0] - 32;
// }

// int main(void)
// {
// char s[]="YASINGUNAY";
// ft_striteri(s,&ft_to_lowercase);
// printf("%s", s);
// return (0);
// }