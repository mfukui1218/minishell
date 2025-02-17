#include "utils.h"


char	*ft_strndup(const char *src, int nb)
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
