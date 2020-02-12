#include<stdio.h>

void main() {

	printf("\n   ------ Pattern -------   \n\n");
	
	int ch;
	for(int i=0;i<4;i++) {
		
		ch=65;
		for(int j=4;j>i;j--)
			printf("    ");
		
		for(int k=0;k<=i;k++) {
			printf("   %c",ch++);
		
		}	
		
		printf("\n\n");
	}

}

/*
Output :


(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ cc Program4.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ ./a.out

   ------ Pattern -------   

                   A

               A   B

           A   B   C

       A   B   C   D



*/
