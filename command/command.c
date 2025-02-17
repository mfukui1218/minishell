#include "command.h"

void	set_command(t_input *input)
{
	size_t	i;

	if (!is_condition(input))
		return ;
	input->command = malloc(sizeof(t_command) * (command_num(input)));
	if (!(input->command))
		return (sel_error(ALLOCATE_ERROR));
	i = 0;
	while (1)
	{
		set_com(input->token[i++]);
		while (input->token[i] && input->token[i] == "|")
		{
			set_option_argument(input->token[i]);
			i++;
		}
		if (input->token[i] != "|")
			break ;
		set_result(input->token[i]);
		i++;
	}
	
}
