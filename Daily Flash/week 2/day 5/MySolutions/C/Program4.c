/*
Problem Statement :

Program 4: Write a Program to Print following Pattern.
0
1 1 
0 0 0 
1 1 1 1
0 0 0 0 0

*/

#include<stdio.h>

void main() {
	
	printf("\n   ----------  Pattern  ---------   \n");
	
	for(int i=0;i<5;i++) {
		for(int j=0;j<=i;j++) {
			
			if(i%2 == 0) 
				printf("  0");
			else
				printf("  1");	
		}
		printf("\n");
	}
	
	printf("\n");	

}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ cc Program4.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ ./a.out

   ----------  Pattern  ---------   
  0
  1  1
  0  0  0
  1  1  1  1
  0  0  0  0  0



*/
