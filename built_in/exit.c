#include "minishell.h"

void	init_exit(t_command *command)
{
	command->command = EXIT;
}

void	exit_fun(void)
{
	size_t i;

	i = 1;
	printf("Saving session...\n\n");
	printf("...copying shared history...\n");
	printf("...saving history...truncating history files...\n");
	printf("...completed.\n\n");
	printf("[プロセスが完了しました]\n");
	disable_ctrl_c_echo();
	disable_input();
	while (i < NUM_OF_SIGNALS)
	{
        if (i != SIGKILL && i != SIGSTOP)
            signal(i, ignore_signal);
		i++;
    }
    while (1)
        sleep(1);
}

void disable_ctrl_c_echo(void)
{
    struct termios term;

    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag &= ~ECHOCTL;
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

void disable_input(void)
{
    struct termios new_termios;

    tcgetattr(STDIN_FILENO, &new_termios);
    new_termios.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_termios);
}

void ignore_signal(int sig) {}