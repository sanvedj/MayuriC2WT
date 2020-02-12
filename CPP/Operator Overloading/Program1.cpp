#include<iostream>

class Operator {

	int x=10,y=20;
	public :
	
		friend std::ostream& operator<<(std::ostream &ref,Operator &obj);
		friend std::ostream& operator?:(std::ostream &ref,Operator &obj);
		
		/*
		void operator :: (Operator &obj) {
		
			std::cout << "Operators  " << std::endl;
		}*/
};

std::ostream& operator<<(std::ostream &ref,Operator &obj) {

	std::cout<<"Operator Overloading" << std::endl;
	std::cout<< obj.x << "  " << obj.y <<std::endl;
	return ref;
}


std::ostream& operator?:(std::ostream &ref,Operator &obj) {

	std::cout<<"Operator Overloading" << std::endl;
	std::cout<< obj.x << "  " << obj.y <<std::endl;
	return ref;
}


int main() {

	Operator o1,o2;
	o1 ?: o2 ;
	return 0;
}
