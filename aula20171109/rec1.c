#include <stdio.h>

int calcula (int * a, int i, int n){
	if (i == (n-1)){
		return a[i];
	}	
	else 
		return a[i]+calcula(a,i+1,n);
}

int main() {
int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
int N = sizeof(A)/sizeof(int);
printf ("%d",calcula(A,0,N));
getchar();
return 0;
}
