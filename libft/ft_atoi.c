/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:26:59 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:53:10 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if ((LONG_MAX - (str[i] - '0')) / 10 < result * sign)
			return (-1);
		if ((LONG_MIN + (str[i] - '0')) / 10 > result * sign)
			return (0);
		result = result * 10 + (str[i++] - '0');
	}
	return (result * sign);
}

// #include <stdio.h>

// int main()
// {
// 	char *test_str1 = "    -12345";
// 	char *test_str2 = "\t\n\v\f\r+54321";
// 	char *test_str3 = "9876";
// 	char *test_str4 = "-0";

// 	printf("ft_atoi(\"%s\") = %d\n", test_str1, ft_atoi(test_str1));
// 	printf("ft_atoi(\"%s\") = %d\n", test_str2, ft_atoi(test_str2));
// 	printf("ft_atoi(\"%s\") = %d\n", test_str3, ft_atoi(test_str3));
// 	printf("ft_atoi(\"%s\") = %d\n", test_str4, ft_atoi(test_str4));

// 	return 0;
// }
