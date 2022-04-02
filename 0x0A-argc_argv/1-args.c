#include <stdio.h>
#include <string.h>
/**
  *main- tthe main
  *@argc: count argument
  *@argv: argument
  *Return: int
  */
int main(int argc, char *argv[])
{
int s;
s = strlen(argv[0]);
s = argc - 1;
printf("%d\n", s);
return (0);
}
