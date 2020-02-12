/*

Problem Statemnt : 
Program 4: Write a Program to Print following Pattern
*
* *
* * *
* * * *

*/

#include<stdio.h>

void main() {


	printf("\n    ------------ Pattern 4  ------------ \n\n");
	
	for(int i=1;i<=4;i++) {
	
		for(int j=0;j<i;j++) {
		
			printf("  *");
		}
		printf("\n");
	}

	printf("\n");
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ cc Program4.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ ./a.out

    ------------ Pattern 4  ------------ 

  *
  *  *
  *  *  *
  *  *  *  *



*/
