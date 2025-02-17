#ifndef INPUT_H
#define INPUT_H

#include "../minishell.h"

void	set_input(t_input *input);
int 	set_token(t_input *input);
char	*read_line_add_history(char *message);

#endif