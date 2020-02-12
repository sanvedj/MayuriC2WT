/*
Problem Statement :

Program 5: Write a Program that prints following pattern.


      4
    3 4 
  2 3 4	
1 2 3 4

*/


#include<stdio.h>

void main() {

	int num;
	
	printf("\n   ----- Pattern ----   \n\n");
	
	for(int i=0;i<4;i++) {
	
		num=0;
		for(int j=4;j>i;j--) {
			
			printf("  ");
			num++;
		}
		
		for(int k=0;k<=i;k++) {
			
			printf("%d ",num++);
		}
		
		printf("\n");
	}

	printf("\n\n");
}



/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ cc Program5.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ ./a.out

   ----- Pattern ----   

        4 
      3 4 
    2 3 4 
  1 2 3 4 



*/
