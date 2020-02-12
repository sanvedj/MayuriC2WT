#include<stdio.h>

void main () {
	
	int ch='E';
	
	switch(ch) {
		
		case 'a' :
		case 'A' : printf("\nA or a");
		
		case 'e' :
		case 'E' : printf("\nE or e");
		
		case 'i' :
		case 'I' : printf("\nI or i");
		
		case 'o' :
		case 'O' : printf("\nO or o");
		
		case 'u' :
		case 'U' : printf("\nU or u");
		
		default : printf("\ndefault");
	}
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program8.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ ./a.out

E or e
I or i
O or o
U or u
default

*/
