#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the content of a dog structure
 *
 * @d: Pointer to the dog structure to print
 *
 * Description: This function prints the content of a dog structure,
 * including its name, age, and owner. If the dog's name or
 * owner is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	/* Check if the pointer to the dog structure is not NULL */
	if (d)
	{
		/* Check if the name field of the dog structure is not NULL */
		/* If not NULL, print the name; otherwise, print "(nil)" */
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));

		/* Print the age field of the dog structure */
		printf("Age: %f\n", d->age);

		/* Check if the owner field of the dog structure is not NULL*/
		/* If not NULL, print the owner's name; otherwise, print "(nil)" */
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
