#include<stdio.h>

void main() {
	
	int arr[3]={10,20,30};
	
	printf("\nFirst element of array    : %d ",*arr);       //*(arr+0) = *(arr+ 0*sizeof(4))
	printf("\nSecond element of array   : %d ",*(arr+1));	//*(arr+ 1*sizeof(4))
	printf("\nThird element of array    : %d ",*(arr+2));	//*(arr+ 2*sizeof(4))

	printf("\nSize of array %d ",sizeof(arr));	//3*4
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/31 March$ gcc Program3.c
mayuri@mayuri-PC:~/C2WT/Class Codes/31 March$ ./a.out

First element of array    : 10 
Second element of array   : 20 
Third element of array    : 30 
Size of array 12 

*/

