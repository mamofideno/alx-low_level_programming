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
