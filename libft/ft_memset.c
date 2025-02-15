/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:16:52 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:41:30 by mfukui           ###   ########.fr       */
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

// #include <stdio.h>
// int main(void)
// {
// 	ftmemset();
// 	return (0);
// }
