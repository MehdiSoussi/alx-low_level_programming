#include "dog.h"
/**
 * init_dog - writes the character c to stdout
 * @d: Parametre 1
 * @name: Parametre 2
 * @age: Parametre 3
 * @owner: Parametre 4
 *
 * Description: [T1]
 *
 * Return: On success 1.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
