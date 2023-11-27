#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Entery point
 * @filename: Parameter 1
 * @letters: Parameter 2
 *
 * Return: return value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t open, read, write;
char *buffer;

buffer = malloc(sizeof(char) * letters);
if (filename == 0 || buffer == 0)
return (0);
open = open(filename, O_RDONLY);
read = read(o, buffer, letters);
write = write(STDOUT_FILENO, buffer, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buffer);
return (0);
}
free(buffer);
close(o);
return (w);
}
