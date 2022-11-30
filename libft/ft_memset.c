/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:59:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/04 07:42:15 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	x;

	i = 0;
	x = (unsigned char)c;
	str = (char *)b;
	while (i < len)
	{
		str[i] = x;
		i++;
	}
	return (b);
}

// int main(void)
// {
// char str[]="yasingunay";
// char str2[]="yasingunay";

// ft_memset(str, 52, 2);
// printf("ft %s\n",str);

// memset(str2, 52, 2);
// printf("or %s\n",str2);

// return (0);
// }

// char *str is maybe unsigned char * str???	
