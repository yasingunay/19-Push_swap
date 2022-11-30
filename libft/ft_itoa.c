/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:58:29 by ygunay            #+#    #+#             */
/*   Updated: 2022/08/08 11:59:54 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc) and returns a string representing the integer 
*	received as an argument. Negative numbers must be handled.
*	PARAMETERS
*	#1. the integer to convert.
*	RETURN VALUES
*	The string representing the integer. NULL if the allocation fails.
INT_MIN	Minimum value for a variable of type int.	-2147483648
INT_MAX	Maximum value for a variable of type int.	2147483647
*/

#include "libft.h"

static int	ft_len(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	size_t		len;
	char		*str;

	nbr = n;
	len = ft_len(nbr);
	str = (char *) malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int	n;

// 	n = 0;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 1;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 12;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 123;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 2147483647;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -1;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -12;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -123;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -2147483648;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	return (0);
// }
