//Array of pointers

#include<stdio.h>

void main() {

	int a=10,b=20,c=30;
	int *arr[4]={&a,&b,&c};
	
	printf("\n%d %d %d",a,b,c);
	printf("\n%d %d %d",arr[0],arr[1],arr[2]);
	
	printf("\n\nThe values are : ");
	for(int i=0;i<3;i++)
	{
		printf(" %d",*(*(arr+i)));
	}	
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/6 April$ gcc Program1.c
mayuri@mayuri-PC:~/C2WT/Class Codes/6 April$ ./a.out

10 20 30
153085928 153085924 153085920

The values are :  10 20 30

*/
