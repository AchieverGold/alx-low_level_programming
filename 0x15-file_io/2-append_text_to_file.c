#include "main.h"

/**
 * append_text_to_file - Appends the text at the end of file.
 * @filename: the pointer to the name of the file.
 * @text_content: a string to add to the end of the file.
 *
 * Return: If the function fails or the filename is NULL then - -1.
 * If the file does not exist the user will lacks the write permissions - -1.
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int ope, j, lenght = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lenght = 0; text_content[lenght];)
lenght++;
}
ope = open(filename, O_WRONLY | O_APPEND);
j = write(ope, text_content, lenght);
if (ope == -1 || j == -1)
return (-1);
close(ope);
return (1);
}
