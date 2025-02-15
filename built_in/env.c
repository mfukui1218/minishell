#include "minishell.h"

void	init_env(t_command *command)
{
	command->command = ENV;
}


int	env_fun(void)
{
	puts("success");
}
