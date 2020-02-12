//Destructor

#include<iostream>

class Company {

	public :
	
		Company() {
		
			std::cout << "\nCompany Constructor ";
		}
		~Company() {						//destrcutor is called after program terminates
		
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

	Employee e1;
	std::cout<< "\n\n ------ The end of code ------ \n ";
	return 0; 
}

/*

Output : 

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ g++ Program2.cpp 
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ ./a.out

Company Constructor 
Employee Constructor 

 ------ The end of code ------ 
 
Employee Destructor 
Company Destructor 



*/

