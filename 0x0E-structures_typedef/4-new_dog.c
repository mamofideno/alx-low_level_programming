#include "dog.h"
/**
77;30502;0c *new_dog-create dof 
 *@name: name
 *@age : age
 *@owner: onwer
 *Return: dog 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t dg;
dg.name = name;
dg.age = age;
dg.owner = owner;
return (&dg);
}
