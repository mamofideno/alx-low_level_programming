/**
 *struct dog - struct
 *@name: name
 *@age: age
 *@owner: owner
 */
/**
 *init_dog - initailize dog
 *@d: pointer to dog
 *@name: dog name
 *@age: dog age
 *@owner: dog onwer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age  = age;
d->owner = owner;
}
