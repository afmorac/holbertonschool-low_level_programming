#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructura que guarda info de un perro
 * @name: nombre del perro
 * @age: edad
 * @owner: dueño o dueña
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Este typedef es solo para poder usar "dog_t" en vez de "struct dog" */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
