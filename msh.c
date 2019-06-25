#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* TODO: ファイル入出力のパイプ */


#define BUFF_SIZE 4096


int main(int argc, const char *argv[])
{

    pid_t pid, wpid;
    int status;
    int fd;


    char command[BUFF_SIZE];
    char* prompt = "$ ";
    char exit_token[BUFF_SIZE];

    while (1) {
        printf("%s", prompt);
        fgets(command, BUFF_SIZE, stdin);

        // Ensure exit command
        /*
        if (strcmp(command, exit_token) == 0) {
            printf("EXIT!!!!");
            exit(0);
        } else {
            printf("NO EXIT!!!\n");
        }
        */

        pid = fork();

        if (pid == 0) {
            execl("/bin/ls", command, 0);
            // exit(0);
        } else {
            // exit(0);
        }

        wait(&status);
    }

    return 0;
}
