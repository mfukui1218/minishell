/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:29:55 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:41:15 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*arr;
	unsigned char	c;
	size_t			i;

	arr = (unsigned char *)buf;
	c = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		if (arr[i] == c)
			return (arr + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <stddef.h>

// void	*ft_memchr(const void *buf, int ch, size_t n);

// int main()
// {
//     const char str[] = "Hello, World!";
//     char ch = 'o';
//     char *result = ft_memchr(str, ch, sizeof(str));

//     if (result)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found.\n", ch);

//     char ch2 = 'z';
//     result = ft_memchr(str, ch2, sizeof(str));

//     if (result)
//         printf("Character '%c' found at position: %ld\n", ch2, result - str);
//     else
//         printf("Character '%c' not found.\n", ch2);

//     return 0;
// }
