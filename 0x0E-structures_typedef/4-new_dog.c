#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog_t struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: NULL if function fails
 * pointer to new dot_t struct on success
 *
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *copy_name, *copy_owner;
	int len_name, len_owner;

	len_name = strlen(name);
	len_owner = strlen(owner);

	copy_name = malloc(len_name + 1);
	if (copy_name == NULL)
		return (NULL);
	copy_owner = malloc(len_owner + 1);
	if (copy_owner == NULL)
	{
		free(copy_name);
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(copy_name);
		free(copy_owner);
		return (NULL);
	}

	strcpy(copy_name, name);
	strcpy(copy_owner, owner);

	dog->age = age;
	dog->name = copy_name;
	dog->owner = copy_owner;

	return (dog);
}
