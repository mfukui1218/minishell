#include "utils.h"

size_t	count_chr(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

size_t count_token(char *str)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] && !(str[i] == ' ' || str[i] == '\t'))
		{
			if (str[i] !='|')
				c++;
			while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '|'))
				i++;
			if (str[i] == '|')
			{
				c++;
				i++;
			}
		}
	}
	return (c);
}

size_t count_command(t_input *input)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (input->token[i])
	{
		if (is_command(&(input->token[i])))
			c++;
		i++;
	}
	return (c);
}

size_t count_pipe(t_input *input)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (input->token[i])
	{
		if (is_pipe(&(input->token[i])))
			c++;
		i++;
	}
	return (c);
}

size_t count_option(t_input *input)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (input->token[i])
	{
		if (is_option(&(input->token[i])))
			c++;
		i++;
	}
	return (c);
}