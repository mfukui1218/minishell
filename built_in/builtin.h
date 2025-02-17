#ifndef BUILTIN_H
#define BUILTIN_H

typedef enum	e_builtin
{
	CD, // 0
	PWD, // 1
	ECHO, // 2
	EXPORT, // 3
	UNSET, // 4
	ENV, // 5
	EXIT // 6
}	t_builtin;

#include "../minishell.h"

//builtin
int		sel_builtin_fun(t_input *input, t_command *command);
int		is_builtin(char *token);

//cd
void	init_cd(t_command *command);
int		cd_fun(t_input *input);

//echo
void	init_echo(t_command *command);
int		echo_fun(t_input *input);

//env
void	init_env(t_command *command);
int		env_fun(void);

//exit
void	init_exit(t_command *command);
void	exit_fun(void);
void	disable_ctrl_c_echo(void);
void 	disable_input(void);
void 	ignore_signal(int sig);

//export
void	init_export(t_command *command);
int		export_fun(void);

//pwd
void	init_pwd(t_command *command);
int		pwd_fun(void);

//unset
void	init_unset(t_command *command);
int		unset_fun(t_input *input);

#endif