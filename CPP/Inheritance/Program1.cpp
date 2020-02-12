#include<iostream>

class TV {

	int remote_size;
	int inches;
	
	public : 
	
	TV() {
		std::cout<<"Normal Constructor \n";
	}
	TV(int remote_size,int inches) {
	
		std::cout<<"Parameterized Constructor \n";
		this->remote_size=remote_size;
		this->inches=inches;
	}
	TV(TV &ref) {
		std::cout<<"\nCopy Constructor \n";
		remote_size=ref.remote_size;
		inches=ref.inches;
	}
	
	void display() {
	
		std::cout<<"\n\nRemote_size : "<<remote_size;
		std::cout<<"\nTV_size     : "<<inches;
	}

};

int main() {

	TV t1;
	TV t2(10,20);
	TV t3=t2;	
	t1.display();	
	t2.display();

	t3.display();
	std::cout<<std::endl;
	return 0;
}
