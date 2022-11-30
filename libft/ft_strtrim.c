/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:32:27 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/02 09:43:56 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description
Allocates (with malloc(3)) and returns a copy of ’s1’ 
with the characters specified in ’set’ removed from 
the beginning and the end of the string.
*/

#include "libft.h"

static int	ft_set_control(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	start = 0;
	while (s1[start] && ft_set_control(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_set_control(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

// int    main(void)
// {
//     char    *strtrim;
//     char s1[] = "yabsingunay";

//     if (!(strtrim = ft_strtrim(s1, "ay")))
//         printf("NULL\n");
//     else
//         printf("%s\n", strtrim);
//     if (strtrim == s1)
//         printf("A new string was not returned\n");
//     return (0);
// }