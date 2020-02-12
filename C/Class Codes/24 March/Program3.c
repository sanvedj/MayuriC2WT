#include<stdio.h>

void main(){

	int val=10;
	double *dptr=&val;		//initialization
	int *iptr=&val;
	
	printf("\nValue of variable is %d",val);
	printf("\nDouble pointer holds address %p",dptr);
	printf("\nInteger pointer holds address %p",iptr);
	printf("\nSize of double pointer %d",sizeof(*dptr));		//here *dptr is not dereferencing , sizeof(dptr) returns the size of data type 										of pointer          
	printf("\nSize of integer pointer %d\n",sizeof(*iptr));

}

/*
Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

Value of variable is 10
Double pointer holds address 0x7fffa1c562ac
Integer pointer holds address 0x7fffa1c562ac
Size of double pointer 8
Size of integer pointer 4


*/
