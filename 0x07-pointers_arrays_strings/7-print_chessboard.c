#include <stdio.h>
#include "main.h"
/**
 *print_chessboard - initilize arra
 *@a: source
 *
 *
 *Return: Return pointer to destination array
 */
void print_chessboard(char (*a)[8])
{
int i;
int c;
int aa;
for(i = 0; i < 8; i++)
{
c = 0;
while( c < 8 )
{
aa=a[i][c];
putchar(aa);
c++;
}
putchar('\n');
}
return;
}
