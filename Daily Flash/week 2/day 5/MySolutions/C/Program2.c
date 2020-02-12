/*
Problem Statement :

Program 2: Write a Program to all the numbers ranging between 1 to 100 that
are divisible by 4 and 7.
Output: 28 56 84

*/

#include<stdio.h>

void main() {

	
	printf("\nNumbers divisible by 4 and 7 : \n\n");
	for(int i=1;i<=100;i++) {
		
		if(i%4==0 && i%7==0) 
			printf(" %d ",i);
	}

	printf("\n\n");

}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ cc Program2.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ ./a.out

Numbers divisible by 4 and 7 : 

 28  56  84 


*/
