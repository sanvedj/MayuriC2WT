#include<stdio.h>

void main() {

	int a=25;
	
	if(a>0 && a<10) 
		printf("\nA in between 0 and 10 ");
	else if( a>20 && a<30 )
		printf("\nA in between 20 and 30 ");
	else
		printf("\nA out of range ");	

	
	if(a>0 && a<10) {
	 
		if(a>0 && a<20)
			printf("\nA in between 0 and 10 ");
		else
			printf("\nA in between 20 and 30 ");
	}
	else
		printf("\n\nA out of range ");	

}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program2.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ ./a.out

A in between 20 and 30 

A out of range 

*/
