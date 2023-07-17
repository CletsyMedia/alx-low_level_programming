#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: Defines metadata about the dog and the type of dog's struct.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Additional function prototypes */

/**
 * _putchar - writes a character to the standard output
 * @c: The character to print
 *
 * Return: On success, the number of characters written.
 *	On error, -1 is returned.
 */
int _putchar(char c);

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes the dog struct with t
 * he given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the content of a dog structure
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the content of a dog structure,
 * including its name, age, and owner.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure.
 *	NULL if memory allocation fails.
 *
 * Description: This function creates a new dog structure
 *	and initializes its members with the given name, age, and owner.
 *	It returns a pointer to the newly allocated dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including the memory for its name and owner.
 */
void free_dog(dog_t *d);

#endif
