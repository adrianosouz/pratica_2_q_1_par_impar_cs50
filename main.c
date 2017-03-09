#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"
int main(void)
{
int a, b, c, d;
printf("Digite um numero\n");
a = GetInt();
printf("digite u numero:\n");
b = GetInt();
c = a %  b;
d = a / b;
if ( c == 0)
{
printf("a e divisivel por b\n");
}
else
{
    printf("O resultado da divisao e : %d\n", d);
    printf("Resto = %d\n", c);
}
if (c % 2 == 0)
{
      printf("O resto e par\n");
}
else
{
      printf("O resto e impar\n");
}
return 0;
}
