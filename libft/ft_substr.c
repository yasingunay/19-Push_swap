/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:49:30 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/08 10:35:26 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
s: The string from which to create the substring. 
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.

Return value
The substring.
NULL if the allocation fails.

Description
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s_len;
	size_t	end;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	s2 = (char *)malloc(sizeof(char) * (end + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, end + 1);
	return (s2);
}

// int main(void)
// {
// 	char name[]="yasin";
// 	char *result;
// 	result=ft_substr(name,1,3);
// 	printf("%s\n",result);
// 	return (0);
// }
