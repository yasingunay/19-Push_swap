/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:32:24 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 17:14:44 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The toupper() function converts a lower-case letter to the corresponding
     upper-case letter.  The argument must be representable as an unsigned
     char or the value of EOF.

     Although the toupper() function uses the current locale, the toupper_l()
     function may be passed a locale directly. See xlocale(3) for more infor-
     mation.

RETURN VALUES
     If the argument is a lower-case letter, the toupper() function returns
     the corresponding upper-case letter if there is one; otherwise, the argu-
     ment is returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, ft_toupper(c));

//     c = 'D';
//     printf("\n%c -> %c", c, ft_toupper(c));

//     c = '9';
//     printf("\n%c -> %c", c, ft_toupper(c));
//     return 0;
// }

// int	main(void)
// {
// 	int		ch;

// 	ch = 'a';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = 'A';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = '0';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = '/';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = 'z';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = 'Z';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	return (0);
// }