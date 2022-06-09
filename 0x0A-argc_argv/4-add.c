#include <stdio.h>
#include <stdlib.h>
/**
  *main- tthe main
  *@argc: count argument
  *@argv: argument
  *
  *Return: int
  */
int main(int argc, char *argv[])
{
int n;
int n2;
if (argc < 3)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%i\n", n + n2);
return (0);
}
