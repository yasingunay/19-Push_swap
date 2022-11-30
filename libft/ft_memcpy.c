/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:40:21 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/04 11:27:37 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead.
RETURN VALUES
     The memcpy() function returns the original   value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*pdst;
	char	*psrc;

	if (!dst && !src)
		return (0);
	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	while (n--)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// char dst[]="";
// char src[]="";
// printf("or %s\n", memcpy(dst,src,2));
// char dst2[]="";
// char src2[]="";
// printf("ft %s\n", ft_memcpy(dst2,src2,2));
// return (0);
// }
