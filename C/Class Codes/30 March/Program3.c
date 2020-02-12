#include<stdio.h>

void main() {
	
	int *ptr1=NULL;
	int arr[3]= {10,20,30};
	
	ptr1=arr;

	printf("\nPointer before increment : %d ",*ptr1);
	ptr1=++ptr1;
	printf("\nPointer after pre increment : %d ",*ptr1);
	ptr1=ptr1++;
	printf("\nPointer after post increment : %d ",*ptr1);
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ gcc Program3.c
mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ ./a.out

Pointer before increment : 10 
Pointer after pre increment : 20 
Pointer after post increment : 20 

*/
