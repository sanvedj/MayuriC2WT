#include<iostream>
using namespace std;

class Operator {

	int name;
	int age;
	
	public :
	
	Operator() {
		cout<<"Const called"<<endl;
	}
	Operator(int name,int age) {
		
		this->name=name;
		this->age=age;
	}
	
	void display() {
	
		cout<<"Name :  "<<name<<endl;
		cout<<"Age  :  "<<age<<endl;
	}
	 void * operator new(size_t size) 
    	{ 
        	cout<< "Overloading new operator with size: " << size << endl; 
        	//void * p = ::new Operator();  
        	void * p = malloc(size); //will also work fine 
      
        return p; 
    	} 
  
    	void operator delete(void * p) 
    	{	 
        	cout<< "Overloading delete operator " << endl; 
        	free(p); 
    	}
};

int main() {

	Operator *p = new Operator(100,24); 
    	p->display(); 
    	
    	string n="Yash";
    	int a=10;
    	cout<<endl;
    	cout<<"size of Yash : " << sizeof(n)<<endl;
    	cout<<"size of a    : "  << sizeof(a)<<endl;
    	delete p; 
	return 0;
}
