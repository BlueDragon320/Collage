#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>

int main() {
    pid_t pid = fork();  
    if (pid < 0) {
        printf("Fork Failed\n");
        exit(EXIT_FAILURE);
    }
    if (pid == 0) {
        printf("Hello from the child process. My PID is %d and my parent's PID is %d\n", getpid(), getppid());
    } else {
        printf("Hello from the parent process. My PID is %d and I created a child with PID %d\n", getpid(), pid);
    }
    return 0;
}
