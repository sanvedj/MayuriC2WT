#include<stdio.h>

void main() {

	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<3;i++) {
		
		for(int j=0;j<3;j++) {
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nAddress of array  : %p",&arr);
	
	printf("\nBase Address of 3 rows  : %p %p %p",arr[0],arr[1],arr[2]);
	printf("\nFirst elements  : %d %d %d",arr[0][0],arr[0][1],arr[0][2]);
}	

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ gcc Program3.c
mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ ./a.out
 1 2 3
 4 5 6
 7 8 9

Address of array  : 0x7ffc7832de30
Base Address of 3 rows  : 0x7ffc7832de30 0x7ffc7832de3c 0x7ffc7832de48
First elements  : 1 2 3



*/
