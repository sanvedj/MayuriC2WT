#include<stdio.h>

int main(void) {
	int inc;
	for(int i = 0; i < 4; i++) {
		inc = 0;
		for(int j = 0; j < 4 - i; j++) {
			printf("%c ", 65 + i + inc);
			inc += 2;
		}
		printf("\n");
	}
}
