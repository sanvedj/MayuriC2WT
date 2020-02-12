/*
Problem Statement : 

Program 5: Pattern.

*/

#include<stdio.h>

void main() {

	for(int i=0;i<5;i++) {
	
		for(int j=0;j<i;j++) {
			
			printf("   *");
		}
		printf("\n");
	}
	
	printf("\n");
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ cc Program5.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ ./a.out

   *
   *   *
   *   *   *
   *   *   *   *


*/
