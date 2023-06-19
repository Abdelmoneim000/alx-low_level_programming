#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[1024] = "hello world this is  the new project simple shell";
    char* args[64];

        // Parse the command and its arguments
        int i = 0;
        args[i] = strtok(buffer, " \n");
        printf("%s\n", args[i]);
        while (args[i] != NULL) {
            i++;
            args[i] = strtok(NULL, " \n");
            printf("%s\n", args[i]);
        }
}
