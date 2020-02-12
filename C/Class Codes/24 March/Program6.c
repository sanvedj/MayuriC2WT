//Arithmetic operation on pointer

#include<stdio.h>
void main() {
	
	int val=10;
	int *ptr=&val;
	
	printf("\nValue of variable      : %d",val);		//10
	printf("\nDereference to pointer : %d",*ptr);		//10		
	printf("\nPost Increment variable: %d",val++);		//prints 10 but value of a is 11
	printf("\nPointer : %d\n",(*ptr)++);			//11

}

/*

Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ gcc Program6.c
mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

Value of variable      : 10
Dereference to pointer : 10
Post Increment variable: 10
Pointer : 11


*/
