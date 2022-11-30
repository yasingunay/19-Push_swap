/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:12:30 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 07:51:33 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isalpha() function tests for any character for which isupper(3) or 
*	islower(3) is true. The value of the argument must be representable as an 
*	unsigned char or the value of EOF.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isalpha() function returns zero if the character tests false and 
*	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	ret;

// 	ret = ft_isalpha('A');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('Z');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('a');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('z');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('1');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha(' ');
// 	printf("return is %d\n", ret);
// 	return (0);
// }

// int main()
// {
//     char c; 
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (ft_isalpha(c) == 0)
//          printf("%c is not an alphabet.", c);
//     else
//          printf("%c is an alphabet.", c);

//     return 0;
// }