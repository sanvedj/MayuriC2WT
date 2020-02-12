#include<stdio.h>

void main() {

	int arr[3]={10,20,30};
	int brr[3]={40,50,60};
	int crr[3]={70,80,90};
	
	int *aptr[3]= {arr,brr,crr};
	
	printf("\nValues of first array are : \n");
	for(int i=0;i<3;i++) {
		
		printf(" %d",*(arr+i));
	}
	
	printf("\n\nValues of second array are : \n");
	for(int i=0;i<3;i++) {
		
		printf(" %d",*(brr+i));
	}
	
	printf("\n\nValues of third array are : \n");
	for(int i=0;i<3;i++) {
		
		printf(" %d",*(crr+i));
	}
	
	printf("\n\n");
	for(int i=0;i<3;i++) {
		
		printf(" %d",*(*(aptr+i)));
	}	
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/6 April$ gcc Program2.c
mayuri@mayuri-PC:~/C2WT/Class Codes/6 April$ ./a.out

Values of first array are : 
 10 20 30

Values of second array are : 
 40 50 60

Values of third array are : 
 70 80 90

 10 40 70
 
*/
