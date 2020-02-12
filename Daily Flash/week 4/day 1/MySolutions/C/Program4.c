/*
Problem Statement :

Program 4: Write a Program to Print following Pattern.

A C E G
B D F
C E
D

*/

#include<stdio.h>

void main() {

	printf("\n   ------- Pattern --------   \n\n");
	int num=65,n=1;
	
	for(int i=0;i<4;i++){
		
		for(int j=i;j<4;j++){
		
			printf("   %c",num);
			num=num+2;
		}
		num=65+n;
		n++;
		printf("\n\n");
	}


	
	printf("\n");
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ cc Program4.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ ./a.out

   ------- Pattern --------   

   A   C   E   G

   B   D   F

   C   E

   D



*/
