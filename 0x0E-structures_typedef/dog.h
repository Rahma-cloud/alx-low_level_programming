#ifndef DE
#define DE

/**
 * struct dog - a function
 * @name: param
 * @age: param
 * @owner: param
 * Return: 0
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
#endif /* DE */
