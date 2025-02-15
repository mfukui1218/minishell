/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:51:07 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:41:25 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (!buf1 && !buf2)
		return (NULL);
	p1 = (unsigned char *)buf1;
	p2 = (unsigned char *)buf2;
	if (p1 <= p2 || p1 >= p2 + n)
	{
		i = 0;
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			p1[i] = p2[i];
	}
	return (p1);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char data[50] = "abcdef";
//     // ft_memmove(NULL, NULL, strlen(data) + 1);
//     printf("%s\n", ft_memmove(NULL, NULL, strlen(data) + 1));
//     printf("%s\n", "-----------------------");
//     char data2[50] = "Hello, World!";
//     ft_memmove(data2, data2 + 2, strlen(data2) - 1);
//     printf("%s\n", data2);  // 出力: "llo, World!"
//     return 0;
// }
