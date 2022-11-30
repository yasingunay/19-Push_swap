/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:00:46 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 07:52:02 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isascii() function tests for an ASCII character, which is any character 
*	between 0 and octal 0177 inclusive.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isascii() function returns zero if the character tests false and returns 
*	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// int result;
// result = ft_isascii('ş');
// printf("for 'ş' return is %d\n",result);
// return(0);
// }

// int	main(void)
// {
// 	int	ret;

// 	ret = ft_isascii('ç');
// 	printf("for 'ç' return is %d\n", ret);
// 	return (0);
// }