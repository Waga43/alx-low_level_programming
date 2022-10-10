#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type definition with the below elements
 * @name: char string parameter
 * @age: float parameter
 * @owner: char string parameter
 * dog_t: typedef of struct dog
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
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
