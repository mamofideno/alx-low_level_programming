/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return:Always 0(Success)
 */
int main(void)
{  
int ch;
for (ch = 1; ch <= 30; ch++)
{
if (ch % 3 == 0 && ch % 5 == 0)
{
printf("fizzbuzz ");
}
else if(ch % 3 == 0)
{
printf("fizz ");
}
else if(ch % 5 == 0)
{
printf("buzz ");
}
else
{
printf("%i ",ch);
}
}    
return 0;
}
