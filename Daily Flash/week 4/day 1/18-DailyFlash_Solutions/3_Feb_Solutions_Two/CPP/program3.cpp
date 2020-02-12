
#include <iostream>

int main () {

	int n, flag = 0;
	std::cout << ("Enter Km : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	std::cout << n << (" KM is equal to ") << n * 1000 << std::endl;
}
