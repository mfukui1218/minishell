NAME = minishell

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I
LIBFT_PATH = ./libft

SRCS = main/main.c main/main_utils.c env.c redirects.c executor.c parser.c signals.c built_in/builtins.c builtins_fun.c exit2.c pipes.c utils.c external_fun.c
OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -lreadline

%.o: %.c
	$(CC) $(CFLAGS) -I$(MLX_PATH) -I$(LIBFT_PATH) -I$(FT_PRINTF_PATH) -I$(GNL_PATH) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
