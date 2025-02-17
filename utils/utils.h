#ifndef UTILS_H
#define UTILS_H

#include "../minishell.h"

size_t	count_chr(char *str, char c);
size_t	count_token(char *str);
size_t	count_command(t_input *input);
size_t	count_pipe(t_input *input);
size_t	count_option(t_input *input);

char	*ft_strndup(const char *src, int nb);

#endif