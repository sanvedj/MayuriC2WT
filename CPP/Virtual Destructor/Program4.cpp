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
	Employee *e1= new Employee();   // use delete to call destructor (object created on heap)
	delete e1;
	  
	return 0; 
}

/*

Output : 

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ g++ Program4.cpp 
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ ./a.out

Company Constructor 
Company Constructor 
Employee Constructor 
Employee Destructor 
Company Destructor 

Company Destructor 



*/

