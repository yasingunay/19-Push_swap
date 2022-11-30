/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:06 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/04 08:48:22 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if
     no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ret;

	ret = (unsigned char *)s;
	while (n--)
	{
		if (*ret == (unsigned char)c)
			return (ret);
		ret++;
	}
	return (NULL);
}

// int main(void)
// {
// char str[]="yasin";
// char str2[]="yasin";
// printf("or %s\n",memchr(str,'s',4));
// printf("ft %s\n",ft_memchr(str2,'s',4));
// return (0);
// }
