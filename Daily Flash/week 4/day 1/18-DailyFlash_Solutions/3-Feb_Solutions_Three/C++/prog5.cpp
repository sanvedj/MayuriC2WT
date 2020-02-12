#include<iostream>

int main() {
	long n, sum = 0, num = 0;
	std::cout << "Enter elemet no : ";
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		num = num * 10 + 9;
		sum += num;
		if(i != n - 1) {
			std::cout << num <<" + ";
		} else {
			std::cout << num << " = ";
		}
	}
	std::cout << sum;
	return 0;
}
