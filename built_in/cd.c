#include "minishell.h"

void	init_cd(t_command *command)
{
	command->command = CD;
}

int	cd_fun(t_input *input)
{
	if (chdir(input) == 0)
	{
		puts("success:cd");
	}
	else
	{
		perror("cd: Error");
	}
}
