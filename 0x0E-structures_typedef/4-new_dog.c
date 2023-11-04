#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - writes the character c to stdout
 * @name: Parametre 1
 * @age: Parametre 2
 * @owner: Parametre 3
 *
 * Description: [T4]
 *
 * Return: On success 1.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *a = malloc(sizeof(dog_t));

if (a == 0)
return 0;
a -> name = name;
a -> age = age;
a -> owner = owner;
return (a);
}
