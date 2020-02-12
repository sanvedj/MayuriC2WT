#include<stdio.h>

void main () {

	int a=2;
	
	switch(a) {
		
		case 1 :	printf("\nOne");
		case 2 :	printf("\nTwo");
		case 3 :	printf("\nThree");
		case 4 :	printf("\nFour");
		default :	printf("\nDefault");
	}
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program4.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ ./a.out

Two
Three
Four
Default

*/
