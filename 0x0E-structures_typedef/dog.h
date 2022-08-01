#ifndef _DOG_
#define _DOG_

/**
 * struct dog _ dog with a few attributes
 * @name: The name of the dog pointer
 * @age: the age
 * @owner: the name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *dup_strint(char *s);
void free_dog(dog_t *d);

#endif
