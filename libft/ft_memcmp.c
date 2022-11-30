/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:18:23 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/04 10:30:18 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.
     Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, oth-
     erwise returns the difference between the first two differing bytes
     (treated as unsigned char values, so that `\200' is greater than `\0',
     for example).  Zero-length strings are always identical.  This behavior
     is not required by C and portable code should only depend on the sign of
     the returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	i++;
	}
	return (0);
}

// int main(void)
// {
// char s1[]="yasin";
// char s2[]="yasim";
// printf("or %d\n", memcmp(s1,s2,4));
// printf("ft %d\n", ft_memcmp(s1,s2,4));
// return (0);
// }
