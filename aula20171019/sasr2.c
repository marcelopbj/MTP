#include <stdio.h>

void impar() {
	for (int i=1; i<=20; i+=2)
		printf("%d ", i);
	getchar();
}
void par() {
	for (int i=2; i<=20; i+=2)
		printf("%d ", i);
	getchar();
}
int main() {
   
    int i;
    printf("1 - impar\n2 - pares\n");
	scanf("%d", &i);
	switch(i) {
	case 1: impar(); break;
	case 2: par(); break;
    }
	getchar();
    return 0;
}