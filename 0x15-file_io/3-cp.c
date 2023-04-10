#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fna);

/**
 * create_buffer -its Allocates a 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: the pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
char *buffa;
buffa = malloc(sizeof(char) * 1024);
if (buffa == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can not write to %s\n", file);
exit(99);
}
return (buffa);
}

/**
 * close_file - Closes file descriptors.
 * @fna: The file descriptory to be closed.
 */

void close_file(int fna)
{
int clo;
clo = close(fna);
if (clo == -1)
{
dprintf(STDERR_FILENO, "Error: Can not close fna %d\n", fna);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is not correct - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
int fro, too, r, j;
char *buffa;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: copy file-from file-to\n");
exit(97);
}

buffa = create_buffer(argv[2]);
fro = open(argv[1], O_RDONLY);
r = read(fro, buffa, 1024);
too = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (fro == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Cannot read from file %s\n", argv[1]);
free(buffa);
exit(98);
}
j = write(too, buffa, r);
if (too == -1 || j == -1)
{
dprintf(STDERR_FILENO,
"Error: Cannot write to %s\n", argv[2]);
free(buffa);
exit(99);
}
r = read(fro, buffa, 1024);
too = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffa);
close_file(fro);
close_file(too);
return (0);
}

