#include<stdio.h>

void main() {

	printf("\n       Pattern        \n\n");
	
	for(int i=0;i<4;i++) {
	
		for(int j=0;j<4;j++) { 
	
			if(i%2==0)
				printf("   0");
			else	
				printf("   1");
		}		
		printf("\n");		
	}	
	
	printf("\n\n");
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ cc Program5.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ ./a.out

       Pattern        

   0   0   0   0
   1   1   1   1
   0   0   0   0
   1   1   1   1



*/
