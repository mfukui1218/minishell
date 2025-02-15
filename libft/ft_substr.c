/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:07:10 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:54:25 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	if (start >= i)
	{
		arr = (char *)malloc(1);
		arr[0] = '\0';
		return (arr);
	}
	if ((i - start) <= len)
		len = i - start;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		arr[i++] = s[start++];
	arr[i] = '\0';
	return (arr);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdio.h>

// // ft_substrの定義をここにコピペするか、適切なヘッダーファイルをインクルードします。

// int main(void)
// {
//     char str[] = "ABCDE";
//     char *substr;

//     substr = ft_substr(str, 2, 3);
//     printf("Original string: %s\n", str);
//     printf("Sub-string: %s\n", substr);

//     free(substr);  // mallocで確保したメモリは使用後に解放する必要があります。
//     return 0;
// }