/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:50:31 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:40:36 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int main()
// {
//     char str[20] = "Hello, world!";
//     printf("Before ft_bzero: %s\n", str);

//     ft_bzero(str, 5);
//     printf("After ft_bzero (first 5 characters set to zero): ");
//     // 文字列の先頭の5文字は0になっているので、それぞれの文字を出力する
//     for (int i = 0; i < 20; i++)
//     {
//         if (str[i])
//             putchar(str[i]);
//         else
//             putchar('_');  // '\0' の場所をアンダースコアで表示する
//     }

//     putchar('\n');
//     return 0;
// }