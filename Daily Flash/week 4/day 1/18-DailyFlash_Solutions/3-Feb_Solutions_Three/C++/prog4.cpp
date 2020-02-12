#include<iostream>

int main() {
	int inc;
	for(int i = 0; i < 4; i++) {
		inc = 0;
		for(int j = 0; j < 4 - i; j++) {
			std::cout << (char)(65 + i + inc) << " ";
			inc += 2;
		}
		std::cout << "\n";
	}
}
