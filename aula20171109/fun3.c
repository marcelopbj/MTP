#include <stdio.h>

void calcula (int *a, int *b, int n, int m)
{
	int i,j;
	for (i=0; i<m;i++){
		for (j=0; j<n; j++){
			if (b[i]==a[j])
				printf("%d, ", b[i]);
		}
	}
}

int main() {
int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
int n = sizeof(A)/sizeof(int);
int m = sizeof(B)/sizeof(int);
calcula(A,B,n,m);
getchar();
return 0;
}
