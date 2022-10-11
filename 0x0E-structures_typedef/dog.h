#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - structure definition of a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog-t - typedef for struct dog
 */

typedef struct dog dog_t:

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog-t *new_dog(char *name, float age, char *owner);
void free-dog(dog_t *d);

#endif