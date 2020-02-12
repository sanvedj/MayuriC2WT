#include<stdio.h>

void main () {
	
	int ch='p';
	
	printf("\nStart");
	switch(ch) {
		
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
		
		default : printf("\ndefault");
	}
	printf("\nEnd\n");
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program9.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ ./a.out

Start
default
End


*/
