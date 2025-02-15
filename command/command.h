#ifndef COMMAND_H
#define COMMAND_H

#include "../minishell.h"

//command
void	set_command(t_input *input);

//utils
int		is_command(char *token);
int		str_has_str_first(char *haystack, char *needle);
int		is_option(char *token);

#endif