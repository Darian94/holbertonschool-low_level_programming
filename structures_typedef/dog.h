#ifndef dog_h
#define dog_h

/**
 * struct dog- new struct
 * @name: name the dog
 * @age: age the dog
 * @owner: name the owner
 */

struct dog
{

	char *name;
	float age;
	char *owner;

} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
