#include "builtin.h"

void	set_builtins(t_input *input)
{
	size_t	i;

	i = 0;
	while(i < input->command_num)
	{
		if (str_has_str_first(input->token[i], "cd"))
			init_cd(&(input->command[i]));
		else if (str_has_str_first(input->token[i], "pwd"))
			init_pwd(&(input->command[i]));
		else if (str_has_str_first(input->token[i], "echo"))
			init_echo(&(input->command[i]));
		else if (str_has_str_first(input->token[i], "export"))
			init_export(&(input->command[i]));
		else if (str_has_str_first(input->token[i], "unset"))
			init_unset(&(input->command[i]));
		else if (str_has_str_first(input->token[i], "env"))
			init_env(&(input->command[i]));
		else if (str_has_str_first(input->token[i], "exit"))
			init_exit(&(input->command[i]));
		i++;
	}
}