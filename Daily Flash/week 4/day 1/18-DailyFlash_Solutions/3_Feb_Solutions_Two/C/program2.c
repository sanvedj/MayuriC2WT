
#include <stdio.h>
#include<math.h>

int main () {

	char c[4];
	printf("Enter Number : ");
	scanf("%c%c%c%c",&c[0],&c[1],&c[2],&c[3]);
	char arr[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int k = 0, n = 0;
	
	for(int i = 3;i >= 0; i--){
		n = n + ((int)c[i] - ((int)'0')) * (int)pow(2,k);
		k++;
	}

	printf("%c\n", arr[n]);
}

/*
	cc program2.c -lm
	./a.out
	1011\n
	B

*/
