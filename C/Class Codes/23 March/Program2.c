//Pointer of one type should store address of that type of element only


#include<stdio.h>
void main() {

	char ch[15]={'H','e','l','l','o'};
	
		
	char *cptr=ch;                                        //name of array equivalent to address of first element of array
	int *iptr=ch;
	
	printf("\nArray elements are : \n");
	for(int i=0;i<5;i++)
		printf("%c  ",ch[i]);
		
	
	printf("\n\nCharacter pointer holds    : %p",cptr);	//address of first element
	printf("\nValue at character pointer : %c",*cptr);	//first element
	cptr++;
	printf("\nAfter incrementing pointer : %c\n",*cptr);	//pointer is incremented by (address+1*sizeof(datatypeofpointer))
	
	printf("\nInteger pointer holds      : %p",iptr);
	printf("\nValue at integer pointer   : %c",*iptr);	//H
	iptr++;
	printf("\nAfter incrementing pointer : %c\n",*iptr);	//o    - because pointer datatype is integer            
	
}

/*

OUTPUT :

mayuri@snowflake:~/C2WT/ClassCodes/23March$ ./a.out

Array elements are : 
H  e  l  l  o  

Character pointer holds    : 0x7fffe1c1a4a3
Value at character pointer : H
After incrementing pointer : e

Integer pointer holds      : 0x7fffe1c1a4a3
Value at integer pointer   : H
After incrementing pointer : o


*/
