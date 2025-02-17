#include "../minishell.h"

void	set_input(t_input *input)
{
	size_t	i;

	input->input = read_line_add_history("minishell$ ");
	input->token = ft_split(input->input, '|');
	set_command(input);
	input->token_num = ft_strlen(input->token);
	input->command_num = count_command(input);
	input->pipe_num = count_pipe(input);
}

// void set_token(t_input *input)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	k;

// 	input->token = malloc(sizeof(char *) * (count_token(input->input) + 1));
// 	if (!input->token)
// 		return (sel_error(ALLOCATE_ERROR));
// 	i = 0;
// 	k = 0;
// 	while (input->input[i])
// 	{
// 		if (input->input[i] == ' ' || input->input[i] == '\t')
// 			i++;
// 		else
// 		{
// 			j = i;
// 			while (input->input[i] && !(input->input[i] == ' ' || input->input[i] == '\t' || input->input[i] == '|'))
// 				i++;
// 			if (input->input[i] == '|')
// 			{
// 				input->token[k++] = "|";
// 				i++;
// 			}
// 			else
//             {
//                 input->token[k++] = ft_strndup(&input->input[j], i - j);
// 			    if (!input->token[k - 1])
// 			    	return (free(input->token), sel_error(ALLOCATE_ERROR));
//             }
// 		}
// 	}
// 	input->token[k] = NULL;
// }


char	*read_line_add_history(char *message)
{
	char	*result;

	result = readline(message);
	if (!result)
	{
		printf("exit\n");
		return (NULL);
	}
	if (*result)
		add_history(result);
	return (result);
}
