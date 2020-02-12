#include<stdio.h>

void main() {

	int a=10;
	
	if(a<10)
		printf("\nInside if statement");		//only one statement is allowed without { }
		printf("\nOutside if statement");				
	else
		printf("\nInside else statement");	
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program1.c
Program1.c: In function ‘main’:
Program1.c:10:2: error: ‘else’ without a previous ‘if’
  else
  ^~~~

*/
