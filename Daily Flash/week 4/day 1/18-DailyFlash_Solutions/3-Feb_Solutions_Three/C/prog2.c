#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void printHex(int num) {
	switch(num) {
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;
		case 14:
			printf("E");
			break;
		case 15:
			printf("F");
			break;
		default:
			printf("%d", num);
			break;
	}
}

void bin_hex(long bin) {
	int dec = 0, rem1, i = 0, hex;
	int rem2 = 0, j = 0, div, temp;
	while(bin != 0) {
		rem1 = bin % 10;
		if(!(rem1 == 0 || rem1 == 1)) {
			printf("Enter correct bin");
			exit(1);
		}
		dec += rem1 * pow(2, i);
		i++;
		bin /= 10;
	}
	temp = dec;
	printf("Hex : ");
	while(j >= 0) {
		div = temp / pow(16, j);
		rem2 = temp % (int)pow(16, j);
		if(div >= 0 && div < 16) {
			printHex(div);
			j--;
			temp = rem2;
		} else {
			j++;
		}
	}
}

int main(void) {
	long binary;
	printf("Enter binary : ");
	scanf("%ld", &binary);
	bin_hex(binary);
	return 0;
}	
