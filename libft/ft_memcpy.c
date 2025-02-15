/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:44:52 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:41:21 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (!buf1 && !buf2)
		return (NULL);
	p1 = (unsigned char *)buf1;
	p2 = (unsigned char *)buf2;
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}

// #include <stdio.h>
// #include <stddef.h>
// #include <string.h>

// int main()
// {
//     char dest[50] = "123456789";
//     const char src[50] = "1234567890";

//     printf("Before memcpy: %s\n", dest);
//     memcpy(dest + 3, dest, strlen(src));
//     printf("After memcpy: %s\n", dest);

//     return 0;
// }
