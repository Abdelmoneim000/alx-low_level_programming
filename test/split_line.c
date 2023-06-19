#include "shell.h"

/**
 * split_line - Splits a line of input into tokens
 * @line: The line of input to split
 *
 * Return: An array of tokens
 */
char **split_line(char *line)
{
    int bufsize, position;
    char **tokens;
    char *token;

    bufsize = 64;
    tokens = malloc(bufsize * sizeof(char *));
    if (!tokens)
    {
        fprintf(stderr, "Allocation error\n");
        exit(EXIT_FAILURE);
    }

    token = strtok(line, DELIMITER);
    position = 0;
    while (token != NULL)
    {
        tokens[position] = token;
        position++;

        if (position >= bufsize)
        {
            bufsize += 64;
            tokens = realloc(tokens, bufsize * sizeof(char *));
            if (!tokens)
            {
                fprintf(stderr, "Allocation error\n");
                exit(EXIT_FAILURE);
            }
        }

        token = strtok(NULL, DELIMITER);
    }
    tokens[position] = NULL;
    return tokens;
}
