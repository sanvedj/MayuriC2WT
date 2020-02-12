
#include <stdio.h>

int main () {

	int n, flag = 0;
	printf("Enter Number : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = 2; i <= n/2; i++){
		
		if(n % i == 0 ){
			printf("Not prime Number\n");
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		printf("Prime Number\n");
	}
}
