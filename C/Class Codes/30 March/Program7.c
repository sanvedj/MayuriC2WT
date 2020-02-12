//Void pointer (Generic pointer)

#include<stdio.h>

void main() {

	int a=10;
	
	void *ptr=&a;
	
	//printf("\n %d",*ptr);		//cannot dereference void pointer
	
	printf("\nSize of void pointer  : %d",sizeof(ptr));
	
	printf("\nValue at a  : %d ", * ((int*)ptr));	//need to explicitly type cast
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ gcc Program7.c
mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ ./a.out

Size of void pointer  : 8
Value at a  : 10 

*/
