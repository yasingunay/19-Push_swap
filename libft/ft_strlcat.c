/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:46:22 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/04 19:32:54 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	strlcat() appends string src to the end of dst.  It will append at most 
*	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
*	dstsize is 0 or the original dst string was longer than dstsize (in practice 
*	this should not happen as it means that either dstsize is incorrect or that 
*	dst is not a proper string).
*	PARAMETERS
*	#1. The destiny string in which to concatenate.
*	#2. The source string to concatenate.
*	#3. The total number of bytes in destiny.
*	RETURN VALUES
*	the strlcat() function returns the length of the string it tried to create.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = 0;
	len_src = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] != 0 && i < (size - len_dst - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// void test(int size)
// {
//     char string[] = "yasingunay"; // source
//     char buffer[100] = "hello"; // dst
//     int r;

//     r = strlcat(buffer,string,size);

//     printf("or Copied '%s' into '%s', length %d\n",string,buffer,r);

//   char string2[] = "yasingunay";
//     char buffer2[100]= "hello";
//     int r2;

//     r2 = ft_strlcat(buffer2,string2,size);

//     printf("ft Copied '%s' into '%s', length %d\n\n",string2,buffer2,r2);
// }

// int main()
// {
//  	test(20);
//     test(9);
//     test(6);
// 		test(5);
//     test(4);
//     test(1);
//     test(0);
//     return(0);
// }
