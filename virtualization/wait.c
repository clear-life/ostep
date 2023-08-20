#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    printf("once pid:%d\n", (int) getpid());

    int rc = fork();
    printf("rc:%d\n", rc);

    printf("test pid:%d\n", (int) getpid());

    int wc = wait(NULL);
    printf("wc:%d\n", wc);
}
