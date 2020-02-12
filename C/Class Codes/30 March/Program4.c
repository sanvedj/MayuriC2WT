//Pointer and integer can be substracted

#include<stdio.h>

void main() {
	
	int *ptr1=NULL;
	int arr[3]= {10,20,30};
	
	ptr1=arr+1;

	printf("\nPointer before substraction : %d ",*ptr1);
	ptr1=ptr1-1;						
	printf("\nPointer after  substraction : %d ",*ptr1);
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ gcc Program4.c
mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ ./a.out

Pointer before substraction : 20 
Pointer after  substraction : 10 

*/

