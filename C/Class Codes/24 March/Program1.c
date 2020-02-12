//Assigning to a pointer

#include<stdio.h>
void main() {

	int a=10;
	int *ptr=a;		//pointer will hold 10              
	
	printf("\nValue of variable : %d",a);
	printf("\nPointer holds     : %p",ptr);
	printf("\nPointer holds     : %d",*ptr);	//segmentation fault - cannot dereference                	
}

/*
Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

Value of variable : 10
Segmentation fault


*/
