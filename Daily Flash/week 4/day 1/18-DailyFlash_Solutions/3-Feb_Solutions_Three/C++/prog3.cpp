#include<iostream>

int main() {
	float dist;
	std::cout << "Enter dist(KM) : ";
	std::cin >> dist;
	if(dist >= 0) {
		std::cout << "dist(m) : " << dist * 1000;
	} else {
		std::cout << "Enter valid det.";
	}
	return 0;
}
