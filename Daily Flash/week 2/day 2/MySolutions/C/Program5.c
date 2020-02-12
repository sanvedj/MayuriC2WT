/*
Problem Statment : 

Program 5 : Pattern.


*/

#include<stdio.h>

void main() {

	for(int i=0;i<4;i++) {
	
		for(int j=0;j<4;j++) {
			
			if(i>=j)
				printf(" 0 ");
		}
		printf("\n");
	}
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/C$ cc Program5.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/C$ ./a.out
 0 
 0  0 
 0  0  0 
 0  0  0  0 



*/
