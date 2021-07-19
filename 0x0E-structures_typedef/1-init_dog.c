#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who owns the dog
 *
 * Description: descripbes the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
