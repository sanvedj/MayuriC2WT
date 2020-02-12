//Pointer

#include<stdio.h>

void main() {

	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<3;i++) {
		
		for(int j=0;j<3;j++) {
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nElements of 2D array are : \n");
	
	
	
	printf("  %d\n",*(*(arr+2)+0) );			
	
	printf("  %d\n",*(*(arr+2)+1));		
	
	for(int i=0;i<3;i++) {
		
		for(int j=0;j<3;j++) {
			printf("  %d",*(*(arr+i)+j));		// arr[1][2] = *(*(arr+1 * sizeof(whole array)) + 2 * sizeof(dtp) )
		}
		printf("\n");
	}
	
}	

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ gcc Program4.c
mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ ./a.out
 1 2 3
 4 5 6
 7 8 9


Elements of 2D array are : 
  1  2  3
  4  5  6
  7  8  9


*/



