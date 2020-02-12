//Destructor

#include<iostream>

class Employee {

	public :
	
		Employee() {
		
			std::cout << "\nEmployee Constructor ";
		}
		~Employee() {
		
			std::cout << "\nEmployee Destructor \n";
		}
};

int main() {

	Employee e1;
}

/*

Output : 

(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ g++ Program1.cpp 
(base) mayuri@mayuri-PC:~/C2WT/CPP/Virtual Destructor$ ./a.out

Employee Constructor 
Employee Destructor 


*/

