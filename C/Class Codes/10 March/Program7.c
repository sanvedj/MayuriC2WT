#include<stdio.h>

void main () {

	int ch=5;
	switch(ch) {
		
		case ++ch : 	printf("\nOne");	//error	
		case 1 : 	printf("\nTwo");
		case 6 : 	printf("\nThree");
		case 66 : 	printf("\nFour");
		default : 	printf("\ndefault");
	}
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program7.c
Program7.c: In function ‘main’:
Program7.c:8:3: error: case label does not reduce to an integer constant
   case ++ch :  printf("\nOne");
   ^~~~

*/
