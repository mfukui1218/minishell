#ifndef BUILTIN_H
#define BUILTIN_H
#define CD 1
#define PWD 2
#define ECHO 3
#define EXPORT 4
#define UNSET 5
#define ENV 6
#define EXIT 7

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