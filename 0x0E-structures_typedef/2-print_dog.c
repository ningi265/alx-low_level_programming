#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to a struct dog to print
 *
 * Description:
 * This function prints the contents of a struct dog, its name, age, and owner.
 * If any of these fields is NULL, they will be displayed as "(nil)".
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	char *name = (d->name != NULL) ? d->name : "(nil)";
	char *owner = (d->owner != NULL) ? d->owner : "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
