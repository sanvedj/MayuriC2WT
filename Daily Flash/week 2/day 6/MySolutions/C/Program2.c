#include<stdio.h>

void main() {

	int n1,n2,swap;
	
	printf("\nEnter two numbers : ");
	scanf("%d %d",&n1,&n2);
	
	printf("\nBefore swap  : %d %d",n1,n2);
	
	swap=n1;
	n1=n2;
	n2=swap;
	
	printf("\nAfter swap   : %d %d",n1,n2);
	printf("\n");
}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ cc Program2.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ ./a.out

Enter two numbers : 7 25

Before swap  : 7 25
After swap   : 25 7

*/
