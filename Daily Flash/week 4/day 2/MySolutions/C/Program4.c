/*
Problem Statement :

Program 4: Write a Program to Print following Pattern.

7   14  21  28
35  42  49
56  63
70

*/

#include<stdio.h>

void main() {

	int num=7;
	printf("\n    ---------- Pattern --------     \n\n");
	
	for(int i=4;i>0;i--) {
		
		for(int j=0;j<i;j++) {
			
			printf("   %-2d",num);
			num=num+7;
		}
		printf("\n\n");
	}
}


/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ cc Program4.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ ./a.out

    ---------- Pattern --------     

   7    14   21   28

   35   42   49

   56   63

   70



*/
