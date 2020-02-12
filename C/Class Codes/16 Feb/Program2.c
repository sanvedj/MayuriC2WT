#include<stdio.h>

void fun();
void gun();


int a=10;
int b;


void main() {

	int c=30;
	int d;
	
	fun();
}

void fun() {

	int e=40;
	printf("\nValue of a : %d ",a);
	printf("\nValue of b : %d ",b);
	printf("\nValue of e : %d ",e);
	gun();
}

void gun() {

	float f=50.5;
	char ch='d';
	
	printf("\nValue of a : %d ",a);
	printf("\nValue of b : %d ",b);
	printf("\nValue of f : %f ",f);
	printf("\nValue of ch : %c ",ch);	
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/16 Feb$ gcc Program2.c
mayuri@mayuri-PC:~/C2WT/Class Codes/16 Feb$ ./a.out

Value of a : 10 
Value of b : 0 
Value of e : 40 
Value of a : 10 
Value of b : 0 
Value of f : 50.500000 
Value of ch : d 

*/

