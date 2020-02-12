//Primitive data types (built-in)

#include<stdio.h>

void main() {

	int a;
	float b;
	char c;
	double d;
	
	// void e;		//error 			
	
	printf("\nInteger     : %d",sizeof(a));
	printf("\nFloat       : %d",sizeof(b));
	printf("\nCharacter   : %d",sizeof(c));
	printf("\nDouble      : %d",sizeof(d));
	
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ gcc Program6.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ ./a.out

Integer     : 4
Float       : 4
Character   : 1`
Double      : 8

*/
