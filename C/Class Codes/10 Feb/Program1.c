
#include<stdio.h>

int a=10;		//global varibales (non-bss)
int b;			//bss (block started with symbol)

void main () {
	
	int c=20;
	int d;		// 0 or garbage value
	
	printf("\nGlobal variables a and b : %d %d ",a,b);
	printf("\nLocal variables c and d  : %d %d ",c,d);
	
	printf("\nValue of a   : %d ",a);
	printf("\nAddress of a : %p ",&a);	//%p to print address (hexadecimal)
	
}


/*
Output : 

mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ gcc Program1.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ ./a.out

Global variables a and b : 10 0 
Local variables c and d  : 20 0 
Value of a   : 10 
Address of a : 0x556504cd3030 

*/
