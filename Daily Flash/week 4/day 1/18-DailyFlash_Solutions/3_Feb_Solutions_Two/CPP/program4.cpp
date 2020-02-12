
#include <iostream>

int main () {

	int n;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= (n - i)*2; j=j+2){
			std::cout << (char)(64 + i + j ) << "\t";
		}
		std::cout << ("\n");
	}
}
