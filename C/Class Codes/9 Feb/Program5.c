#include<stdio.h>
int c=30;	//global variable

void main() {
	
	void fun(){
		
		int a=10;
		printf("\n%d",a);
		a++;
		printf("\n%d",a);
		printf("\n%d\n",c);

	}
	c=40;
	
	void gun(){
	
		int b=20;
		printf("\n%d",b);
		b--;
		printf("\n%d",b);
		printf("\n%d",c);

	}
	gun();
	fun();
}

/*
Output : 

20
19
40
10
11
40

*/	
