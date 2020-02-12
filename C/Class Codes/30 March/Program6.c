//Relation operation on pointer

#include<stdio.h>

void main() {
	
	int arr[3]={10,20,30};
	float arr1[3]={10,20,30};
	int res;
	
	int *ptr=arr;
	float *ptr1=arr1+1;
	
	printf("\nAddress of integer array : %p ",arr);
	printf("\nAddress of float array : %p ",arr1);
	
	res=ptr!=ptr1;
	printf("\nNot equal    : %d",res);
	
	res=ptr<ptr1;
	printf("\nLess than    : %d",res);
	
	res=ptr>ptr1;
	printf("\nGreater than : %d",res);
	
	res=ptr==ptr1;
	printf("\nEqual to     : %d",res);
	
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ gcc Program6.c
Program6.c: In function ‘main’:
Program6.c:17:9: warning: comparison of distinct pointer types lacks a cast
  res=ptr!=ptr1;
         ^~
Program6.c:20:9: warning: comparison of distinct pointer types lacks a cast
  res=ptr<ptr1;
         ^
Program6.c:23:9: warning: comparison of distinct pointer types lacks a cast
  res=ptr>ptr1;
         ^
Program6.c:26:9: warning: comparison of distinct pointer types lacks a cast
  res=ptr==ptr1;
         ^~
mayuri@mayuri-PC:~/C2WT/Class Codes/30 March$ ./a.out

Address of integer array : 0x7ffdedf99250 
Address of float array : 0x7ffdedf99244 
Not equal    : 1
Less than    : 0
Greater than : 1
Equal to     : 0

*/
