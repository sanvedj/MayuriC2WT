
#include <iostream>

int main () {

	int n, k = 1;
	unsigned long sum = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		sum = sum + k * 10;
		std::cout << k * 10 - 1 << (i != n ? '+':'\0') ;
		k = k * 10;
	}
	std::cout << ("= ") << sum - n << "\n";
}
