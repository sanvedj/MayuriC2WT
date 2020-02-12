#include<stdio.h>

void main() {

	// int a=10,20,30,40,50;	error - expected identifier or ‘(’ before numeric constant
	
	int b=(10,20,30,40,50);	//  , operator  (takes last value)
	int c={10,20,30,40,50};	//  , separator (uniform initialization - first value )
	
	printf("\nValue of b : %d ",b);
	printf("\nValue of c : %d ",c);
}

/*
Output :

warning : 

Program4.c: In function ‘main’:
Program4.c:8:12: warning: excess elements in scalar initializer
  int c={10,20,30,40,50};


mayuri@mayuri-PC:~/C2WT/Class Codes/16 Feb$ ./a.out

Value of b : 50 
Value of c : 10 

*/
