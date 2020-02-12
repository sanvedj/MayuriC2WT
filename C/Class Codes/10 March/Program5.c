#include<stdio.h>

void main () {

	int a=5;
	int b=3;
	
	switch(a) {
		
		case 1 :	printf("\nOne");
		case 5 :	printf("\nTwo");
		case 3 :	printf("\nThree");
		case b :	printf("\nFour"); 	// error - error: case label does not reduce to an integer constant
		case 5 : 	printf("\nFive");	// error - error: duplicate case value
		default :	printf("\nDefault");
	}
}


/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ 
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program5.c
Program5.c: In function ‘main’:
Program5.c:13:3: error: case label does not reduce to an integer constant
   case b : printf("\nFour");  // error - error: case label does not reduce to an integer constant
   ^~~~
Program5.c:14:3: error: duplicate case value
   case 5 :  printf("\nFive");
   ^~~~
Program5.c:11:3: error: previously used here
   case 5 : printf("\nTwo");
   ^~~~


*/
