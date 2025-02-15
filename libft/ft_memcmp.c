/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:31:07 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:41:18 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	int				c;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)buf1;
	p2 = (unsigned char *)buf2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			c = p1[i] - p2[i];
			return (c);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stddef.h>

// int ft_memcmp(const void *buf1, const void *buf2, size_t n);

// int main()
// {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Hello, World!";
//     const char str3[] = "Hello, Wxrld!";

//     int result = ft_memcmp(str1, str2, sizeof(str1));
//     if (result == 0)
//         printf("str1 and str2 are the same.\n");
//     else
//         printf("str1 and str2 are different.\n");

//     result = ft_memcmp(str1, str3, sizeof(str1));
//     if (result == 0)
//         printf("str1 and str3 are the same.\n");
//     else
//         printf("str1 and str3 are different. Difference: %d\n", result);

//     return 0;
// }
