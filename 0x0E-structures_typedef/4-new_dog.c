#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new struct of type dog
 * @name: Struct parameter name
 * @age: Struct parameter age
 * @owner: Struct parameter owner
 *
 * Return: Returns a pointer to a buffer of datatype dog
 *
 * Description: This function creates a new dog structure and initializes its
 * members with the given name, age, and owner. It dynamically
 * allocates memory for the dog structure and its members, such as
 * name and owner, by calculating their lengths using while loops
 * to find the null-terminator. It returns a pointer to the newly
 * allocated dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int numLen, ownLen, i;
	dog_t *doggy;

	numLen = ownLen = 0;
	/* Calculate the length of name using while loop */
	while (name[numLen++])
		;

	/* Calculate the length of owner using while loop */
	while (owner[ownLen++])
		;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(numLen * sizeof(doggy->name));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	/* Copy name to the dog structure using for loop */
	for (i = 0; i < numLen; i++)
		doggy->name[i] = name[i];
	doggy->age = age;
	doggy->owner = malloc(ownLen * sizeof(doggy->owner));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	/* Copy owner to the dog structure using for loop */
	for (i = 0; i < ownLen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
