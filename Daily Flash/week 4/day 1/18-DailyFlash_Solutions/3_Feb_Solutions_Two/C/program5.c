
#include <stdio.h>

int main () {

	int n, k = 1;
	unsigned long sum = 0;
	printf("Enter Number : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		sum = sum + k * 10;
		printf("%lu %c ", k * 10 - 1, (i != n ? '+':'\0'));
		k = k * 10;
	}
	printf("= %lu\n", sum - n);
}
