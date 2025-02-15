#include "minishell.h"

void	init_pwd(t_command *command)
{
	command->command = PWD;
}

int	pwd_fun(void)
{
	char *cwd;

	cwd = getcwd(NULL, 0);
	if (cwd != NULL)
	{
		printf("%s\n", cwd);
        free(cwd); 
		return (1);
	}
	else
	{
		perror("pwd: Error");
		return (0);
	}
}