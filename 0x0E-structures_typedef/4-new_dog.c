#include "dog.h"
/**
 *new_dog -create dof 
 *@name: name
 *@age : age
 *@owner: onwer
 *Return: dog 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *dg 
dg->name = name;
dg->age = age;
dg->owner = owner;
return (dg);
}
