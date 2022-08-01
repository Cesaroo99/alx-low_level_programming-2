#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog with a few attributes
 * @name: The name of the dog pointer
 * @age: the age
 * @owner: the name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
