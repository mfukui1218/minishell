#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <termios.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]) {
    while (*envp) {
        printf("%s\n", *envp);
        envp++;
    }
    return 0;
}
