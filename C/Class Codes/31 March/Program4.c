#include<stdio.h>

void main() {

	int arr[5]={1,2,3,4,5};
	
	int *iptr1=arr;		//name of array = address of first element of array
	int *iptr2=&arr;
	
	printf("\nAddress of first pointer : %p",iptr1);	//first element
	printf("\nAddress of second pointer : %p",iptr2);	//base address
	
	printf("\nFirst pointer value  : %d ",*iptr1);
	printf("\nSecond pointer value : %d ",*iptr2);
	
	iptr1++;
	iptr2++;
	
	printf("\n\nAddress of first pointer : %p",iptr1);	
	printf("\nAddress of second pointer : %p",iptr2);	
	
	printf("\nFirst pointer value  : %d ",*iptr1);
	printf("\nSecond pointer value : %d ",*iptr2);

}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/31 March$ ./a.out

Address of first pointer : 0x7ffcd5736030
Address of second pointer : 0x7ffcd5736030
First pointer value  : 1 
Second pointer value : 1 

Address of first pointer : 0x7ffcd5736034
Address of second pointer : 0x7ffcd5736034
First pointer value  : 2 
Second pointer value : 2 


*/
