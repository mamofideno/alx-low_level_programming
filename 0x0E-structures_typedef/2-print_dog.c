#include <stdio.h>
/**
 *struct dog - struiuct
 *@name: name
 *@age: age 
 *@owner: own
 */
struct dog
{
char *name;
int age;
char *owner;
};
/**
 *print_dog - print dog structure
 *@dog: dog st
 *Retun: void
 */
void print_dog(struct dog *d)
{
printf("Name: %s\n",dog->name);
printf("Age: %f\n",dog->age);
printf("Owner: %s",dog->owner);
}
