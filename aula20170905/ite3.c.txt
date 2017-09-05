#include <stdio.h>

int main()
{
char palavra[256];
int j;
printf("Informe sua palavra: ");
gets(palavra);
for (j=0; palavra[j]!='\0'; j++);
printf("\n%i \n", j);
return 0;
}