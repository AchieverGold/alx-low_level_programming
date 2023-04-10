#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file that will print to STDOUT.
 * @filename: name of text file to be read
 * @letters: no of letters to be read
 * Return: j- actual no of bytes read and printed
 *        0 when the function fails or when the filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *bufe;
ssize_t fna;
ssize_t j;
ssize_t i;
fna = open(filename, O_RDONLY);
if (fna == -1)
return (0);
bufe = malloc(sizeof(char) * letters);
i = read(fna, bufe, letters);
j = write(STDOUT_FILENO, bufe, i);
free(bufe);
close(fna);
return (j);
}
