#include<iostream>


class A {

	public :
	
	int a=10;
	
	A() {
	
		std::cout<<"\nNormal Constructor";
	}
	
	A(int a) {
	
		std::cout<<"\nPara Constructor";
	}
};

class B : virtual public A {

	public :
	
	int b=20;
	
	B(int x) : b(x) ,A(10){
	 	
	 	A();
	}
	
	void display() {
		
		std::cout<< b << std::endl;
	}
	
};


int main () {

	B obj(10);
	return 0;
	
}


