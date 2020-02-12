
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, flag = 0;
	printf("Enter Km : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	printf("%d KM is equal to %dm\n", n, n * 1000);
}
