//Nested Functions

#include<stdio.h>

void fun();  //prototype of function 


void main() {

	
	void fun() {
		
		printf("\n%d",10);
	}
	
	fun();
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/9 Feb$ gcc Program4.c
mayuri@mayuri-PC:~/C2WT/Class Codes/9 Feb$ ./a.out

10


// if call to function fun is the first line of main then ;

mayuri@mayuri-PC:~/C2WT/Class Codes/9 Feb$ gcc Program4.c
/tmp/ccdnrfgH.o: In function `main':
Program4.c:(.text+0x16): undefined reference to `fun'
collect2: error: ld returned 1 exit status

*/
