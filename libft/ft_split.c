/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukui <mfukui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:04:24 by mfukui            #+#    #+#             */
/*   Updated: 2023/09/27 00:41:52 by mfukui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *src, int nb)
{
	int		len;
	char	*dest;

	dest = (char *)malloc(nb + 1);
	if (!dest)
		return (0);
	len = 0;
	while (src[len] && len < nb)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

static int	ft_word_c(const char *str, char ch)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] == ch)
			i++;
		if (str[i] && str[i] != ch)
		{
			c++;
			while (str[i] && str[i] != ch)
				i++;
		}
	}
	return (c);
}

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static void	ft_null(char **str)
{
	*str = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	result = (char **)malloc((ft_word_c(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			result[k++] = ft_strndup((char const *)&s[j], i - j);
			if (!result[k - 1])
				return (ft_free(result), NULL);
		}
		else
			i++;
	}
	return (ft_null(&result[k]), result);
}
