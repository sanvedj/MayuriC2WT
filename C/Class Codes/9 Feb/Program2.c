#include<stdio.h>

int a=10;         //global variables
int b;		// value 0 since uninitialized				

void gun() {

	int e=50;
	printf("\n%d\n",e);
}

void fun() {

	int c=15;
	printf("\n%d",c);
	gun();
}

void main() {

	int g=5;
	printf("\nGlobal variables : %d , %d ",a,b);
	printf("\n%d",g);
	gun();
}


/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/9 Feb$ gcc Program2.c
mayuri@mayuri-PC:~/C2WT/Class Codes/9 Feb$ ./a.out

Global variables : 10 , 0 
5
50

*/
