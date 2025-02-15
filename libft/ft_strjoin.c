/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:52:53 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:45:29 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	dst_len = ft_strlen(s1);
	src_len = ft_strlen(s2);
	result = (char *)malloc(dst_len + src_len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < dst_len)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < src_len)
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// // 前に定義した ft_strjoin のコードをここに含めてください

// int main()
// {
//     char const *s1 = "Hello, ";
//     char const *s2 = "World!";
//     char *result;

//     result = ft_strjoin(s1, s2);
//     if (result)
//     {
//         printf("Joined string: %s\n", result);
//         free(result);  // malloc で確保したメモリを解放
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
