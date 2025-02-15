#include "command.h"

int	is_option(char *token)
{
	size_t	i;

	i = 0;
	if (token[i++] != '-')
		return (0);
	while(token[i])
	{
		if (token[i] != 'n')
			return (0);
		i++;
	}
	return (1);
}