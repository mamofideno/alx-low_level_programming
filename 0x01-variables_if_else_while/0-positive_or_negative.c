#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if(n<0){
    printf("%f is negative",n);
  }else if(n==0){
    printf("%f is zero",n);
  }
  else{
    printf("%f is positive");
  }
  return (0);
}
