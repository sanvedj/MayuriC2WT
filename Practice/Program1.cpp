#include<iostream>

class Test {

	public : 
	
		static int a;		//static variable declaration
		 
		int b = 20;  		//normal variable
		
		
		Test() {		//normal const	
		
			std::cout << "\n\nNormal constructor " << std::endl;
		}
		
		Test(int a) {		//parameterized const
			
			std::cout << "Parameterized constructor " <<std :: endl;
			std::cout << " Value of a : " << a <<std :: endl;
			std::cout << " Value of b : " << b <<std :: endl;
			std::cout << " Static variable : " << this->a <<std::endl << std::endl;
			b=40;
			this->a = 99;
		}
		
		
};

int Test :: a =10 ;        // static variable initialization

int main() {
	
	Test t;			// call to normal const
	Test t1(50);		// call to parametrized const
	Test t2(30);
	
	std::cout << "\n\n";	
	return 0;
}
