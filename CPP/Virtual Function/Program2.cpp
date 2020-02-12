#include<iostream>


class A {

	public :
	
	int a=10;
	
	const char * display() {		
		
		return "Class A";		
	}	
};


class B : public A {

	public :
	
	int b=10;
	
	const char * display() {
		
		return "Class B";		
	}	
};

int main() {

	B b;
	A &a = b;
	std::cout << "\n" << a.display() << std::endl;			//base class method is called in cpp 
	return 0;
}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Function$ g++ Program2.cpp 
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Function$ ./a.out

Class A


*/


