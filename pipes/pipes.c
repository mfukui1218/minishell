#include "minishell.h"

int is_pipe(char token)
{
	if (token == '|')
		return (1);
	return (0);
}