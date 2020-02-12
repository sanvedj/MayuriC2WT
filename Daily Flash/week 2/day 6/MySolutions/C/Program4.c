
#include<stdio.h>

void main() {

	printf("\n   --------- Pattern  ------------- \n");
	
	for(int i=0;i<5;i++) {
		
		for(int j=0;j<=i;j++) {
			
			if(i%2==0)
				printf("  a");
			else
				printf("  A");	
	
		}
		printf("\n");
	
	}
	printf("\n");

}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ cc Program4.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ ./a.out

   --------- Pattern  ------------- 
  a
  A  A
  a  a  a
  A  A  A  A
  a  a  a  a  a



*/
