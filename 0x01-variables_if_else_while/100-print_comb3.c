#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
/** 
* main - Entry point
*
*Description - print numbers from 0 to 99 seperated by commas 
*
*Return: Always 0 (success) 
*/ 
int main(void) 
{
int n1, n2; 
for (n1 = 0; n1 < 9; n1++) 
{ 
for (n2 = n1 + 1; n2 < 10; n2++) 
{ 
putchar((n1 % 10) + '0'); 
putchar((n2 % 10) + '0'); 
if (n1 == 9 && n2 == 9) 
continue; 
putchar(','); 
putchar(' '); 
} 
} 
putchar('\n'); 
return (0); 
}
