
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
		std::cout << "\nConstructor B ";      // no call to super since inherited virtually    
	}
	
	void display() {
		
		std::cout << b << std::endl; 
		std::cout << a << std::endl; 
	}

};

class C : public B {

	public :
	
	int c=30 ;
	
	C() {
		std::cout << "\nConstructor C \n";      
	}
	
	void display() {
		
		std::cout << a << std::endl; 
		std::cout << b << std::endl; 
		std::cout << c << std::endl; 
		
	}
};

int main() {

	C c;
	c.display();
	return 0;
}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Inheritance$ g++ Program4.cpp
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Inheritance$ ./a.out

Constructor A 
Constructor B 

Constructor C 
10
20
30


*/
