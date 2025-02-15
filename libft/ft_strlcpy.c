/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:14:49 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:43:54 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = ft_strlen((char *)src);
	if (size)
	{
		len = 0;
		while (src[len] && size > len + 1)
		{
			dst[len] = src [len];
			len++;
		}
		dst[len] = '\0';
	}
	return (i);
}
