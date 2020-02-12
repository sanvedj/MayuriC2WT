#include<iostream>

int isPrime(int n) {
	if(n <= 3) {
		return n > 1;
	} else if(n % 2 == 0 || n % 3 == 0) {
		return 0;
	}

	int i = 5;

	while(i * i <= n) {
		if(n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}	
		i += 6;
	}

	return 1;
}	

int main() {
	int num;
	std::cout << "Enter number : ";
	std::cin >> num;
	if(isPrime(num)) {
		std::cout << "Prime number.";
	} else {
		std::cout << "Not a prime";
	}
	return 0;
}	
