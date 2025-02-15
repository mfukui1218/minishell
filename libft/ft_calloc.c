/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:46:01 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:40:32 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*p1;

	i = 0;
	p1 = (unsigned char *)buf;
	while (i < n)
	{
		p1[i] = ch;
		i++;
	}
	return (p1);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*arr;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	arr = (unsigned char *)malloc(count * size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, count * size);
	return (arr);
}
