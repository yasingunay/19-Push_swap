/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 07:58:34 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/20 16:15:26 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isprint() function tests for any printing character, 
*	including space (' '). The value of the argument must be representable as an 
*	unsigned char or the value of EOF.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isprint() function returns zero if the character tests false and returns 
*	non-zero if the character tests true.
*/

#include "libft.h"
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}

// int main()

// {

// int result_ft;
// int result_or;

// result_ft= ft_isprint(113);
// printf("%d\n",result_ft);
// result_or= isprint(113);
// printf("%d\n",result_or);

// // result= ft_isprint(' ');
// // printf("%d\n",result);

// // result= ft_isprint('a');
// // printf("%d\n",result);

// // result= ft_isprint('9');
// // printf("%d\n",result);
// }