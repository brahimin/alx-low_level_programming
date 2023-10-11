#ifndef DOG
#define DOG
/**
 * struct dog - define a struct dog
 * @name: f
 * @age: a
 * @owner: o
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
