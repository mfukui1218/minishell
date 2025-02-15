#ifndef MINISHELL_H
#define MINISHELL_H

#include "built_in/builtin.h"
#include "init/init.h"
#include "error/error.h"
#include "libft/libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <termios.h>
#include <readline/readline.h>
#include <readline/history.h>
#define NUM_OF_SIGNALS 32

typedef struct s_input{
	char		*input;
	char		**token;
	t_command	*command;
	size_t		token_num;
	size_t		command_num;
	size_t		pipe_num;
}	t_input;

typedef struct s_command{
	int		command;
	int		*option;
	char	*arguments;
	t_result	*result;
}	t_command;

typedef struct s_result{
	char		*result;
	t_result	*prev;
	t_result	*next;
}	t_result;

//debug
void line(void);

//main

char	*read_line_add_history(char *message);

//main_utils

void	set_input(t_input *input);
int		set_token(t_input *input);
size_t	c_num(char *str, char c);
size_t	token_count(char *str);
size_t	command_pipe_num(t_input *input);

#endif