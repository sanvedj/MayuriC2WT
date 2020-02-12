#include<stdio.h>

void main(){

	int val=10;
	double *dptr;		
	int *iptr;
	
	printf("\nValue of variable is %d",val);
	printf("\nDouble pointer holds address %p",dptr);
	printf("\nInteger pointer holds address %p",iptr);
	printf("\nSize of double pointer %d",sizeof(*dptr));		//here *dptr is not dereferencing , sizeof(dptr) returns the size of data type 										of pointer          
	printf("\nSize of integer pointer %d",sizeof(*iptr));
	printf("\nValue at double pointer %d",*dptr);
	printf("\nValue at integer pointer %d\n",*iptr);

}

/*
Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ gcc Program4.c
mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

Value of variable is 10
Double pointer holds address 0x7fff80248c70
Integer pointer holds address 0x55fd375e2540
Size of double pointer 8
Size of integer pointer 4
Value at double pointer 928917560
Value at integer pointer -1991643855
	


*/
