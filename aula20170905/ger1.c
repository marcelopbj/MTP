#include <stdio.h>

int main()
{
    int n, i, flag;
    flag= 1;
	i=2;

    printf("Informe o numero: ");
    scanf("%i", &n);

    if (n <= 1)
		flag = 0;

    while (flag== 1 && i <= n / 2) 
	{
		if (n % i  == 0)
			flag = 0;
		i = i + 1;
    }

    if (flag == 1)
		printf("%iE primo \n", n);
    else
		printf(" %iNao e primo \n", n);

    return 0;
}