#include<stdio.h>

void main() {

	int arr[4]={10,20,30,40};
	int a=10,b=20;
	
	int *ptr1=arr+3;			// ptr= arr +  3* (sizeof(datatype of pointer))
						// = 100 + 3*4 = 112
	 
	int *ptr2=arr;
	
	printf("\nValue at pointer1 : %d",*ptr1);
	printf("\nValue at pointer2 : %d",*ptr2);
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ gcc Program1.c
mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ ./a.out

Value at pointer1 : 40
Value at pointer2 : 10


*/
