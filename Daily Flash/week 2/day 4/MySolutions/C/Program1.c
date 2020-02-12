/*

Problem Statemnt : 

Program 1: Write a Program to Print following Pattern

1
2 2
3 3 3
4 4 4 4

*/

#include<stdio.h>

void main() {


	printf("\n    ------------ Pattern 1  ------------ \n\n");
	
	for(int i=1;i<=4;i++) {
	
		for(int j=0;j<i;j++) {
		
			printf(" %d",i);
		}
		printf("\n");
	}

	printf("\n");
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ cc Program1.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ ./a.out

    ------------ Pattern 1  ------------ 

 1
 2 2
 3 3 3
 4 4 4 4


*/
