#include<stdio.h>

void main() {

	int n,arr[100];
	printf("\nEnter the range : ");
	scanf("%d",&n);
	
	printf("\nEnter %d numbers : ",n);
	for(int i=0;i<n;i++) {
	
		scanf("%d",&arr[i]);
	}
	
	
	printf("\nThe numbers are : ");
	for(int i=0;i<n;i++) {
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 5/day 1/MySolutions/C$ cc Program1.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 5/day 1/MySolutions/C$ ./a.out

Enter the range : 6

Enter 6 numbers : 1
2
3
4
5
6

The numbers are : 1 2 3 4 5 6 


*/
