/*

Problem Statemnt : 

Program 3: Write a Program to Print following Pattern

1
2 3
4 5 6
7 8 9 10

*/

#include<stdio.h>

void main() {

	
	printf("\n    ------------ Pattern 3  ------------ \n\n");
	int num=1;
	
	for(int i=1;i<=4;i++) {
	
		for(int j=0;j<i;j++) {
		
			printf("   %d",num++);
		}
		printf("\n");
	}

	printf("\n");
}



/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ cc Program3.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ ./a.out

    ------------ Pattern 3  ------------ 

   1
   2   3
   4   5   6
   7   8   9   10


*/
