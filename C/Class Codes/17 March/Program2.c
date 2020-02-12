#include<stdio.h>

void main() {

	int arr[5],i,ans;
	
	printf("\nEnter 5 elements  : ");
	for(i=0;i<5;i++) {
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++) {
		ans=ans+arr[i];
	}
	
	printf("\nAddition is : %d ",ans);
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ gcc Program2.c
mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ ./a.out

Enter 5 elements  : 1
2
3
4
5

Addition is : 15 
*/
