#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog - dog structure
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif
#ifndef _PRINT_DOG_H_
#define _PRINT_DOG_H_
void print_dog(struct dog *d);
#endif
#ifndef _DOG_T_H_
#define _DOG_T_H_
typedef struct dog dog_t;
#endif
#ifndef _NEW_DOG_H_
#define _NEW_DOG_H_
dog_t *new_dog(char *name, float age, char *owner);
#endif
