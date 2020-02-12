//Assigning pointer to pointer

#include<stdio.h>

void main() {

	int age=132;
	int *iptr=&age;		//initialization		
	
	char c='a';
	char *cptr=&c;		//initialization
	
	printf("\nBefore assignment  ");
	printf("\nInteger    : %d",*iptr);
	printf("\nCharacter  : %d",*cptr);
	
	cptr=iptr;			//assigning pointer to pointer
	
	printf("\n\nAfter assignment  ");
	printf("\nInteger    : %d",*iptr);
	printf("\nCharacter  : %d\n",*cptr);	//wrap up value of 132 so it becomes -124	
}

/*
Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

Before assignment  
Integer    : 132
Character  : 97

After assignment  
Integer    : 132
Character  : -124


*/
