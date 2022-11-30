/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:44:47 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/04 16:53:40 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

// int main(void)
// {
// char str[]="yasingunay";
// char str2[]="yasingunay";
// printf("or %s\n", strchr(str,'\0'));
// printf("ft %s\n", ft_strchr(str2,'\0'));
// return (0);
// }
