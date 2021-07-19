#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to init
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: %s\n", "nil");
else if (d->owner == NULL)
printf("Owner: %s\n", "nil");
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
