/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:13:41 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 17:17:26 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding
     lower-case letter.  The argument must be representable as an unsigned
     char or the value of EOF.

     Although the tolower() function uses the current locale, the tolower_l()
     function may be passed a locale directly. See xlocale(3) for more infor-
     mation.

RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns
     the corresponding lower-case letter if there is one; otherwise, the argu-
     ment is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// int	main(void)
// {
// 	int		ch;

// 	ch = 'a';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_tolower(ch));
// 	ch = 'A';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_tolower(ch));
// 	ch = '0';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_tolower(ch));
// 	ch = '/';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_tolower(ch));
// 	ch = 'z';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_tolower(ch));
// 	ch = 'Z';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_tolower(ch));
// 	return (0);
// }