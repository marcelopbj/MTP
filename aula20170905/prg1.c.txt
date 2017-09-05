#include <stdio.h>
int main()
{
int a, b, soma, sub, mult, div, rest;
scanf("%i", &a);
scanf("%i", &b);
soma=a+b;
sub=a-b;
mult=a*b;
div=a/b;
rest=a%b;
printf("%i, %i, %i, [%i, %i] \n", soma, sub, mult, div, rest);
return 0;
}