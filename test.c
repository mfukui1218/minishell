#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <termios.h>

typedef struct s_input{
	char		*input;
	char		**token;
	size_t		token_num;
	size_t		command_num;
	size_t		pipe_num;
}	t_input;

// void execute_command(char *command, char **args) {
//     pid_t pid = fork(); // 子プロセスを作成

//     if (pid == 0) { // 子プロセス (成功するとここで `execve()` を実行)
// 		puts("jhdsfgvs2");
//         execve(command, args, NULL);
//         perror("execve failed");
//         exit(1);
//     } else { // 親プロセス (シェル)
// 		puts("jhdsfgvs");
//         waitpid(pid, NULL, 0); // 子プロセスが終わるまで待つ
//     }
// }

char	*ft_strndup(const char *src, int nb)
{
	int		len;
	char	*dest;

	dest = (char *)malloc(nb + 1);
	if (!dest)
		return (0);
	len = 0;
	while (src[len] && len < nb)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
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

int set_token(t_input *input)
{
	size_t	i;
	size_t	j;
	size_t	k;

	input->token = malloc(sizeof(char *) * (count_token(input->input) + 1));
	if (!input->token)
		return (0);
	i = 0;
	k = 0;
	while (input->input[i])
	{
		if (input->input[i] == ' ' || input->input[i] == '\t')
			i++;
		else
		{
			j = i;
			while (input->input[i] && !(input->input[i] == ' ' || input->input[i] == '\t' || input->input[i] == '|'))
				i++;
			if (input->input[i] == '|')
			{
				input->token[k++] = "|";
				i++;
			}
			else
            {
                input->token[k++] = ft_strndup(&input->input[j], i - j);
			    if (!input->token[k - 1])
			    	return (free(input->token), 0);
            }
		}
	}
	input->token[k] = NULL;
	return (1);
}

int main ()
{
    t_input *input;

    input = malloc(sizeof(t_input));
    char *message = "  |ewjfgsffhru  |ihfhfiuref|fdhguidf  |    ";
    input->input = malloc(sizeof(char) * strlen(message) + 1);
    strcpy(input->input, message);
    set_token(input);

    for (int i = 0; i < 10; i++)
        printf("%s     ", input->token[i]);
}
