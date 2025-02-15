#include "builtin.h"

int	sel_builtin_fun(t_input *input, t_command *command)
{
	if (command->command == CD)
		return (cd_fun(input));
	else if (command->command == PWD)
		return (pwd_fun());
	else if (command->command == ECHO)
		return (echo_fun(input));
	else if (command->command == EXPORT)
		return (export_fun());
	else if (command->command == UNSET)
		return (unset_fun(input));
	else if (command->command == ENV)
		return (env_fun());
	else if (command->command == EXIT)
		exit_fun();
	return (0);
}

int	is_builtin(char *token)
{
	if (str_has_str_first(token, "cd"))
		return (1);
	else if (str_has_str_first(token, "pwd"))
		return (1);
	else if (str_has_str_first(token, "echo"))
		return (1);
	else if (str_has_str_first(token, "export"))
		return (1);
	else if (str_has_str_first(token, "unset"))
		return (1);
	else if (str_has_str_first(token, "env"))
		return (1);
	else if (str_has_str_first(token, "exit"))
		return (1);
	return (0);
}