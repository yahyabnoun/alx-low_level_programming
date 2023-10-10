#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,  d->age,  d->owner);
}
}
