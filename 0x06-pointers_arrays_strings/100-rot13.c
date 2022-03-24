#include <stdio.h>
#include <string.h>
/**
 *rot13 - rotd 
 *@str: string 
 */
char *rot13(char *str)
{
int i;
int l;
int s;
l = strlen(str);
for(i = 0; i < l; i++)
{
  if(str[i] >='A' && str[i] <= 'Z'){
s = ('A' + ((str[i] - 'A' + 13) % 26));
str[i] = 'A' + s;
  }
else{

  }
}
return str;
}
  
