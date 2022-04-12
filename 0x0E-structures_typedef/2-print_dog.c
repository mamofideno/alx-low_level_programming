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
 *@dog: d st
 *Retun: void
 */
void print_dog(struct dog *d)
{
printf("Name: %s\n",d->name);
printf("Age: %i\n",d->age);
printf("Owner: %s",d->owner);
}
