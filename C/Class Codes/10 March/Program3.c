//Switch statement 

#include<stdio.h>

void main() {
	
	int a=1;
	
	switch(a) {
		
		printf("\nHello");
		case 1 :
			printf("\nOne");
			
		printf("\nHi");
		
		default :
			printf("\ndefault");
			printf("\nHey");	
	}
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program3.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ ./a.out

One
Hi
default
Hey

*/
