#include<stdio.h>

void main () {
	
	int a=10;
	
	switch(a) {
		
		
		default : printf("\ndefault");
		break;
		
		case 'a' :
		case 'A' : printf("\nA or a");
		break;		
		
		case 'e' :
		case 'E' : printf("\nE or e");
		break;
		
		case 'i' :
		case 'I' : printf("\nI or i");
		break;
		
		case 'o' :
		case 'O' : printf("\nO or o");
		break;
		
		case 'u' :
		case 'U' : printf("\nU or u");
		break;
		
	}
	printf("\nEnd\n");
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program10.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ ./a.out

default
End


*/
