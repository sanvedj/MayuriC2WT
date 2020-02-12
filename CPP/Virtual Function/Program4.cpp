// Virtual Function

#include<iostream>


class A {

	public :
	
	int a=10;
	
	virtual const char *  display() {		
		
		return "Base";		
	}	
};


class B : public A {

	public :
	
	int b=10;
	
	 const char * display() {
		
		return "Derived";		
	}	
};

int main() {

	B b;
	A &a = b;
	std::cout << a.display() << std::endl;			//derived class method is called (Late Binding)
	  
	return 0;
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Function$ g++ Program4.cpp 
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Function$ ./a.out
Derived


*/

