#include<iostream>
using namespace std;


int a=20;
static int b=30;

class Demo {

	int x=10;
	static int y;

	public :
		
		Demo() 	{
		
			cout<<"\nNormal Constructor";
			Demo obj(x);
		}
		
		Demo(int a) {
			cout<<"\nParameterized Constructor";
		}
		
		
		static void m1() {
		
			cout<<"\nMethod 1\n";
			cout<<"\ny - "<<y;cout<<"\n"<<b;
			
			Demo *obj=new Demo();
			cout<<"\nx - "<<obj->x;
		}
		
		void m2() {
			
			
			cout<<"\nMethod 2\n";
			cout<<"\ny - "<<y;
			cout<<"\nb - "<<b;
			Demo obj;
			cout<<"\nx - "<<obj.x;
			cout<<"\na - "<<a;
		}
		
		void m3() const {
		
			cout<<"\nMethod 3\n";
			Demo obj;
			cout<<"\nx - "<<obj.x;
			cout<<"\na - "<<a;
		}
		
		Demo(Demo &obj) {
			cout<<"\nIn const\n";
			*this=obj;
		}
		
		/*Demo(Demo &ref) {
			cout<<"\nIn copy";
		}*/
		
		
		
};

int Demo :: y =50;

int main() {

	Demo *obj=new Demo();
	obj->m1();
	obj->m2();
	//Demo *obj2=new Demo();
	const Demo *obj2=new Demo();
	obj2->m3();
	//Demo obj3(*obj2);
	const Demo obj3=*obj2;
	//obj3=obj2;
	
	return 0;
}
