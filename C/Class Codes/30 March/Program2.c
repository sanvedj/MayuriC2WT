#include<stdio.h>

void main() {
	
	int *ptr1,*ptr2;
	int a=10,b=20;
	
	ptr1=&a;
	ptr2=&b;
	
	ptr1=ptr1+ptr2;		//error
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ gcc Program2.c
Program2.c: In function ‘main’:
Program2.c:11:11: error: invalid operands to binary + (have ‘int *’ and ‘int *’)
  ptr1=ptr1+ptr2;
           ^


*/
