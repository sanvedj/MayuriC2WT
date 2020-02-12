//Destructor

#include<iostream>

class Company {

	public :
	
		Company() {
		
			std::cout << "\nCompany Constructor ";
		}
		~Company() {						
		
			std::cout << "\nCompany Destructor \n";
		}
};

class Employee : public Company{

	public :
	
		Employee() {
		
			std::cout << "\nEmployee Constructor ";
		}
		~Employee() {
		
			std::cout << "\nEmployee Destructor ";
		}
};

int main() {

	Company c1;
	Company *c2 = new Company();  // does not call destructor cannot delete memory allocated on heap
	return 0; 
}

/*

Output : 

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ g++ Program3.cpp 
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ ./a.out

Company Constructor 
Company Constructor 
Company Destructor 


*/

