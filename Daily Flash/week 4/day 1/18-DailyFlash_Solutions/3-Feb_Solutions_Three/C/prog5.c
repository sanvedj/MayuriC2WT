#include<stdio.h>

int main(void) {
	long n, sum = 0, num = 0;
	printf("Enter elemet no : ");
	scanf("%ld", &n);
	for(int i = 0; i < n; i++) {
		num = num * 10 + 9;
		sum += num;
		if(i != n - 1) {
			printf("%ld + ", num);
		} else {
			printf("%ld = ", num);
		}
	}
	printf("%ld", sum);
	return 0;
}
