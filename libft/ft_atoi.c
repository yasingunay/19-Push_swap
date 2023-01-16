/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:06:57 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/16 16:11:12 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to
     by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

     While the atoi() function uses the current locale, the atoi_l() function
     may be passed a locale directly. See xlocale(3) for more information.

Return Value
This function returns the converted integral number as an int value. 
If no valid conversion could be performed, it returns zero.

HELP
1-handle white spaces(ascii 9-13 and 32)
2-handle the sign
3-your atoi does not work with over long max value
your atoi does not work with over long min value
4-handle the conversion
*/

#include "libft.h"
#include "../push_swap.h"

// int	ft_atoi(const char *str)
// {
// 	int	result;
// 	int	sign;
// 	int	i;

// 	result = 0;
// 	sign = 1;
// 	i = 0;
// 	while (*str == 32 || (*str >= 9 && *str <= 13))
// 		str++;
// 	if (*str == '-')
// 		sign *= -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		result = result * 10 + *str - '0';
// 		str++;
// 		if (result * sign > INT_MAX)
// 			ft_error(" some arguments are bigger than an integer");
// 		if (result * sign < INT_MIN)
// 			ft_error(" some arguments are smaller than an integer");
// 	}

// 	return (result * sign);
// }

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
		if (result * sign > INT_MAX)
			ft_error("Some arguments are bigger than an integer\n");
		if (result * sign < INT_MIN)
			ft_error("Some arguments are smaller than an integer\n");
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char	str[] = "40";
// 	char	str2[] = "40";
// 	int		ret;
// 	int		ret2;

// 	ret = atoi(str);
// 	printf("or  %d\n", ret);

// 	ret2 = ft_atoi(str2);
// 	printf("ft %d\n",ret2);
// 	return (0);
// }
