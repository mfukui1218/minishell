#include "command.h"

int	is_command(char *token)
{
	if (is_builtin(token) || is_exec(token))
		return (1);
	return (0);
}

int	str_has_str_first(char *haystack, char *needle)
{
	size_t	i;

	i = 0;
	while (haystack[i] == needle[i] && haystack[i] && needle[i])
		i++;
	if (needle[i] == '\0')
		return (1);
	return (0);
}
