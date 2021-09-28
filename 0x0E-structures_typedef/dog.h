#ifndef DOG_H
#define DOG_H

/**
 * struct dog_t - new dog struct
 * @name: char
 * @age: float
 * @owner: char
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*
 * void init_dog(struct dog *d, char *name, float age, char *owner);
 * void print_dog(struct dog *d);
 */
#endif
