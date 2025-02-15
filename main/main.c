#include "../minishell.h"

int main(int argc, char **argv)
{
	t_input *input;

	(void)argc;
	(void)argv;
	input = malloc(sizeof(t_input *));
	if (!input)
		return (sel_error(ALLOCATE_ERROR), 0);
	init_all(input);
	while (1)
	{
		set_input(input);
		execute_function(input);
		free(input->input);
	}
	return (0);
}

void line(void)
{
	puts("---------------------------");
}