#include<stdio.h>

void main() {

	char ch='z';
	int *ptr=ch;
	
	float f=10.5;
	float *fptr=&f;
	

	printf("\nValue of variable %f",f);
	printf("\nPointer holds address %p",fptr);
	printf("\nPointer holds value %f\n",*fptr);
	
	printf("\nValue of variable %c",ch);
	printf("\nPointer holds address %p\n",ptr);
	printf("\nPointer holds value %d",*ptr);      // segmentation fault        
	
}

/*
Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

Value of variable 10.500000
Pointer holds address 0x7fff10139c94
Pointer holds value 10.500000

Value of variable z
Pointer holds address 0x7a
Segmentation fault


*/
