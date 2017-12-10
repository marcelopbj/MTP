#include <stdio.h>

int inverte (char *str, int n){
	if (str[n]!='\0')
	printf("%c%c", str[n],inverte(str,n+1));
	return 0;
}

int main() {
char str[20];
fgets(str,20,stdin);
getchar();
inverte(str,0);
return 0;
}
