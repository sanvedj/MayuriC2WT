#include<stdio.h>

void main () {

	char ch = 'A';
	
	switch(ch) {
		
		case 'p' : printf("\nOne");
		case 10 : printf("\nTwo");
		case 'A' : printf("\nThree");
		case 65 : printf("\nFour");		//error
		default : printf("\ndefault");
	}
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program6.c
Program6.c: In function ‘main’:
Program6.c:12:3: error: duplicate case value
   case 65 : printf("\nFour");
   ^~~~
Program6.c:11:3: error: previously used here
   case 'A' : printf("\nThree");
   ^~~~


*/
