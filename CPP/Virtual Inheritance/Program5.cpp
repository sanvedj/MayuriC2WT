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

class B : public A {
	
	public :
	int b;
	
	B() {
		std::cout << "\nConstructor B ";
	}
	
	void display() {
		
		std::cout <<b << std::endl; 
	}

};

class C : public A {
	
	public :
	int c;
	
	C() {
	
		std::cout << "\nConstructor C ";
	}
	
	void display() {
		
		std::cout << c << std::endl; 
	}

};


class D : public B , public C {
	
	public :
	int d=40;
	
	D() {
		std::cout << "\nConstructor D \n";
	}
	
	void display() {
		
		std::cout << d << std::endl; 
		// std::cout << a << std::endl;   error: reference to ‘a’ is ambiguous
 
	}

};

int main() {

	D d;
	d.display();
	return 0;
}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Inheritance$ g++ Program5.cpp
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Inheritance$ ./a.out

Constructor A 
Constructor B 
Constructor A 
Constructor C 
Constructor D 
40


*/
