#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - Entery point
 * @filename: Parameter 1
 * @letters: Parameter 2
 *
 * Return: return value
 */
int create_file(const char *filename, char *text_content)
{
int filedescription, write, length = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
filedescription = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
write = write(filedescription, text_content, length);
if (filedescription == -1 || write == -1)
return (-1);
close(filedescription);
return (1);
}
