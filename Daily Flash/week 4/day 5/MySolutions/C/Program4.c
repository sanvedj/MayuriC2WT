#include<stdio.h>

void main() {

	printf("\n -------  Pattern   ------ \n\n");
	int ch;
	
	for(int i=0;i<4;i++) {
	
		ch=64;
		for(int j=4;j>i;j--) { 
			printf("    ");
			ch++;	
		}	
		
		for(int k=0;k<=i;k++) {
			printf("%c   ",ch);
			ch++;
		}		
		
		printf("\n\n");
		
	}

}


/*
Output :



(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/C$ cc Program4.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/C$ ./a.out

 -------  Pattern   ------ 

                D   

            C   D   

        B   C   D   

    A   B   C   D  

*/
