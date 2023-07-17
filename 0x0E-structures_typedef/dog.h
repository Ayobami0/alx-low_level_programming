#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - a datastructure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H_ */
