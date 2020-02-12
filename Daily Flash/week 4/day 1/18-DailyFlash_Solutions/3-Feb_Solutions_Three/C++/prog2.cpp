#include<math.h>
#include<iostream>

void printHex(int num) {
	switch(num) {
		case 10:
			std::cout << "A";
			break;
		case 11:
			std::cout << "B";
			break;
		case 12:
			std::cout << "C";
			break;
		case 13:
			std::cout << "D";
			break;
		case 14:
			std::cout << "E";
			break;
		case 15:
			std::cout << "F";
			break;
		default:
			std::cout << num;
			break;
	}
}

void bin_hex(long bin) {
	int dec = 0, rem1, i = 0, hex;
	int rem2 = 0, j = 0, div, temp;
	while(bin != 0) {
		rem1 = bin % 10;
		if(!(rem1 == 0 || rem1 == 1)) {
			std::cout << "Enter correct bin";
			exit(1);
		}
		dec += rem1 * pow(2, i);
		i++;
		bin /= 10;
	}
	temp = dec;
	std::cout << "Hex : ";
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

int main() {
	long binary;
	std::cout << "Enter binary : ";
	std::cin >> binary;
	bin_hex(binary);
	return 0;
}	
