/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:55:40 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 07:52:36 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isdigit() function tests for a decimal digit character.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isdigit() function returns zero if the character tests false and 
*	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	ret;

// 	ret = ft_isdigit('a');
// 	printf("return is %d\n", ret);
// 	ret = ft_isdigit('0');
// 	printf("return is %d\n", ret);
// 	ret = ft_isdigit('9');
// 	printf("return is %d\n", ret);
// 	ret = ft_isdigit('.');
// 	printf("return is %d\n", ret);
// 	return (0);
// }

// int main()
// {
//     char c;
//     int r;

//     printf("please enter a character ");
//     scanf("%c",&c);

//     r=ft_isdigit(c);

//     printf("return is %d",r);

//     return 0;
// }