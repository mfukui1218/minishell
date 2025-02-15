/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:23:15 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:41:11 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(int n)
{
	size_t	c;

	if (n == 0)
		return (1);
	c = 0;
	while (n)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	nb;
	char	*result;

	nb = n;
	i = ft_num_len(nb) + (nb < 0);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	if (nb == 0)
		result[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
	}
	i--;
	while (nb)
	{
		result[i--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	result[ft_num_len(n) + (n < 0)] = '\0';
	return (result);
}

//  #include <stdio.h>

// // ... あなたの ft_itoa および ft_num_len 関数 ...

// int main()
// {
// 	int numbers[] = { 0, -123, 456, 7890, -54321 };
// 	int n = sizeof(numbers) / sizeof(numbers[0]);

// 	for (int i = 0; i < n; i++)
// 	{
// 		char *converted = ft_itoa(numbers[i]);
// 		printf("%d -> %s\n", numbers[i], converted);
// 		free(converted);
// 	}

// 	return 0;
// }
