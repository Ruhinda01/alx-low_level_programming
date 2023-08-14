#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
