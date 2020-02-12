#include<stdio.h>

void main() {

	int arr[5],i,mult;
	
	printf("\nEnter 5 elements  : ");
	for(i=0;i<5;i++) {
		scanf("%d",&arr[i]);
	}
	
	
	mult=arr[0]*arr[4];
	
	
	printf("\nMultiplication of first n last element is : %d ",mult);
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ gcc Program3.c
mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ ./a.out

Enter 5 elements  : 1
2
3
4
5

Multiplication of first n last element is : 5 

*/
