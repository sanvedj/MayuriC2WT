/*
Problem Statement :

Program 4: Write a Program to Print following Pattern.


a  b  c  d
c  d  e 
e  f
g



*/


#include<stdio.h>

void main() {

	printf("\n     --------- Pattern --------- \n\n");
	
	int ch=97;
	int val=2;
	
	for(int i=0;i<4;i++) {
	
		for(int j=4;j>i;j--) {
			
			printf("    %c",ch++);
		}
		
		ch=ch-val;
		val--;	
			
		
		printf("\n\n");
		
	}
	
	printf("\n\n");
}



/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ cc Program4.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ ./a.out

     --------- Pattern --------- 

    a    b    c    d

    c    d    e

    e    f

    g



*/
