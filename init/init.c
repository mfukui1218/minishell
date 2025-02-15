#include "init.h"

void	init_all(t_input *input)
{
	init_input(input);
	init_command(input->command);
}

void	init_input(t_input *input)
{
	input->input = NULL;
	input->token = NULL;
	input->command_num = 0;
	input->pipe_num = 0;
	input->token_num = 0;
	init_command(input->command);
}

void	init_command(t_command *command)
{
	command->command = 0;
	command->option = NULL;
	command->arguments = NULL;
	command->result = NULL;
}
