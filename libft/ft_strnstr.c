/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:07:42 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/25 13:12:32 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strnstr() function locates the first occurrence of the null-terminated 
*	string needle in the string haystack, where not more than len characters are 
*	searched.  Characters that appear after a `\0' character are not searched.
*	PARAMETERS
*	#1. The string in which to check for the occurence of the substring.
*	#2. The substring to check the occurence of.
*	#3. The number of bytes to check in haystack.
*	RETURN VALUES
*	If needle is an empty string, haystack is returned; if needle occurs nowhere 
*	in haystack, NULL is returned; otherwise a pointer to the first character of 
*	the first occurrence of needle is returned.
*/

// RETURN VALUES
// If Fa little is an empty string, Fa big is returned; 
// if Fa little occurs nowhere in Fa big , 
// NULL is returned;
// otherwise a pointer to the first character of 
// the first occurrence of Fa little is returned.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > i + j)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main(void)

// {
// const char *largestring = "Foo Bar Baz";
// const char *smallstring = "ar";
// char *ptr;
// char *ptr2;

// ptr = ft_strnstr(largestring, smallstring,7);
// ptr2 = strnstr(largestring, smallstring,7);

// printf("ft %s\n",ptr);
// printf("or %s\n",ptr2);

// return (0);
// }