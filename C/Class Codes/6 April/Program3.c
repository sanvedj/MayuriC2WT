//Addition of first element of 4 array

#include<stdio.h>

void main() {

	int arr[3]={1,2,3};
	int brr[3]={4,5,6};
	int crr[3]={7,8,9};
	int drr[3]={10,11,12};
	
	int *aptr[4]= {arr,brr,crr,drr};
	
	printf("\nAddition is :  \n");
	
	printf("%d\n",*(*(aptr+0))+*(*(aptr+1))+*(*(aptr+2))+*(*(aptr+3)));
		
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/6 April$ gcc Program3.c
mayuri@mayuri-PC:~/C2WT/Class Codes/6 April$ ./a.out

Addition is :  
22

 
*/
