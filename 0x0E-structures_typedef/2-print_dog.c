#include "dog.h"
#include <stdio.h>
/**
 * print_dog - writes the character c to stdout
 * @d: Parametre 1
 *
 * Description: [T2]
 *
 * Return: On success 1.
 */
void print_dog(struct dog *d)
{
if (d != 0)
{
if (d->name == 0)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == 0)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
}
