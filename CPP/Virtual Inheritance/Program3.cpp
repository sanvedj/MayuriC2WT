
#include<iostream>

class A {
	
	public :
	int a=10;
	
	A() {
	
		std::cout << "\nConstructor A ";
	}
	
	void display() {
		
		std::cout << a << std::endl; 
	}

};

class B : public virtual A {
	
	public :
	int b=20;
	
	B() {
		std::cout << "\nConstructor B \n";      //call to super   
	}
	
	void display() {
		
		std::cout << b << std::endl; 
		std::cout << a << std::endl; 
	}

};

int main() {

	B b;
	b.display();
	return 0;
}

/*
Output : 


(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Inheritance$ g++ Program3.cpp
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Inheritance$ ./a.out

Constructor A 
Constructor B 
20
10

*/
