#include<stdio.h>

void main () {

	int arr[5]={};
	
	printf("\nElements of integer array are : ");
	for(int i=0;i<5;i++)
		printf(" %d",arr[i]);

	char a[5]={};
	
	printf("\nElements of character array are : ");
	for(int i=0;i<5;i++)
		printf(" %c",arr[i]);
		

	int arr1[5]={{1,2,3,4,5},20,30,40,50};
	
	printf("\nElements of array are : ");
	for(int i=0;i<5;i++)
		printf(" %d",arr1[i]);
	
	int arr2[5]={(1,2,3,4,5),20,30,40,50};
	
	printf("\nElements of array are : ");
	for(int i=0;i<5;i++)
		printf(" %d",arr2[i]);	
			
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/31 March$ ./a.out

Elements of integer array are :  0 0 0 0 0
Elements of character array are :      
Elements of array are :  1 20 30 40 50
Elements of array are :  5 20 30 40 50

*/
