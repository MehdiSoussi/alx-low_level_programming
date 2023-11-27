#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - Entery point
 * @filename: Parameter 1
 * @text_content: Parameter 2
 *
 * Return: return value
 */
int append_text_to_file(const char *filename, char *text_content)
{
int open, write, length = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
open = open(filename, O_WRONLY | O_APPEND);
write = write(open, text_content, length);
if (open == -1 || write == -1)
return (-1);
close(open);
return (1);
}
