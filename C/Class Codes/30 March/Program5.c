//Two Pointers can be substracted

#include<stdio.h>

void main() {
	
	int *ptr1,*ptr2;
	int arr[5]= {10,20,30,40,50};
	int a;
	
	ptr1=arr;
	ptr2=arr+4;

	printf("\nPointer before substraction : %d ",*ptr1);
	a=ptr1-ptr2;							// ptr1-ptr2 / sizeof(dtp)
	printf("\nPointer after  substraction : %d ",a);
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ gcc Program5.c
mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ ./a.out

Pointer before substraction : 10 
Pointer after  substraction : -4 m

*/

