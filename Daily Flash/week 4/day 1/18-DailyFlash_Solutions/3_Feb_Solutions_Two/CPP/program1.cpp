
#include <iostream>

int main () {

	int n, flag = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int i = 2; i <= n/2; i++){
		
		if(n % i == 0 ){
			std::cout << ("Not prime Number\n");
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		std::cout << ("Prime Number\n");
	}
}
