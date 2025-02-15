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
		return (1);
	}
	else
	{
		perror("cd: Error");
		return (0);
	}
}
