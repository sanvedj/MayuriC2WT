//Print elements at even index

#include<stdio.h>

void main() {

	int arr[100],i,s;
	
	printf("\nEnter size of array");
	scanf("%d",&s);
	
	printf("\nEnter elements  : ");
	for(i=0;i<s;i++) {
		scanf("%d",&arr[i]);
	}	

	printf("\nElements at even index are : ");
	for(i=0;i<s;i++) {
		if(i%2==0)
			printf(" %d",arr[i]);
	}

}

/*
Output :


mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ gcc Program4.c
mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ ./a.out

Enter size of array10

Enter elements  : 1
2
3
4
5
6
7
8
9
10

Elements at even index are :  1 3 5 7 9
*/
