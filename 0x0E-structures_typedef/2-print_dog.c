#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print all members in a dog struct
 * @d: dog struct
 * Description:
 * if any member of the struct is NULL print (nil)
 * as the value of that member
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s", d->name != NULL ? d->name : "(nil)");
	if (d->age == 0)
		printf("Age: %s", "(nil)");
	else
		printf("Age: %f", d->age);
	printf("Owner: %s", d->owner != NULL ? d->owner : "(nil)");
}
