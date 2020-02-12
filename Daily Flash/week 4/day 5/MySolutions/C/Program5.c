#include<stdio.h>

void main() {

	printf("\n  --------  Pattern -------   \n\n");
	int val=1;
	
	for(int i=0;i<4;i++) {
	
		val=1;
		for(int j=0;j<4;j++) {
		
			if( i==j ) {
				printf("   =");
				val++;
			}
			else	
				printf("   %d",val++);
		}
		
		printf("\n\n");
	}
	
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/C$ cc Program5.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 5/MySolutions/C$ ./a.out

  --------  Pattern -------   

   =   2   3   4

   1   =   3   4

   1   2   =   4

   1   2   3   =


*/
