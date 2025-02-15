/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:21:29 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:46:07 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// int main(void) {
//     char const *test1 = "123a111111111111111111111";
//     char const *set1 = "123";
//     char *result1 = ft_strtrim(test1, set1);
//     printf("トリミング前: '%s'\n", test1);
//     printf("トリミング後: '%s'\n", result1);
//     free(result1);
//     char const *test2 = "!!!!Hello World!!!!";
//     char const *set2 = "!";
//     char *result2 = ft_strtrim(test2, set2);
//     printf("トリミング前: '%s'\n", test2);
//     printf("トリミング後: '%s'\n", result2);
//     free(result2);

//     return 0;
// }
