
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, k = 0;
	printf("Enter Size : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= (n - i)*2; j=j+2){
			printf("%c ", 64 + i + j );
		}
		printf("\n");
	}
}
