#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - writes the character c to stdout
 * @d: Parametre 1
 *
 * Description: [T5]
 *
 * Return: On success 1.
 */
void free_dog(dog_t *d)
{
free(d);
}
