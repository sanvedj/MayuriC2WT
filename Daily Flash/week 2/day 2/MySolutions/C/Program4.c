/*
Problem Statment : 

Program 4: Write a Program that accepts an integer from user and print table of that number.

*/

#include<stdio.h>

void main() {

	int num;
L1:	printf("\nEnter a number : ");
	scanf("%d",&num);
	if(num<=0) {
		printf("\nEnter positive number !! ");
		goto L1;
	}
	
	printf("\nTable of %d is :: \n\n",num);
	
	for(int i=1;i<=10;i++)
		printf(" %d ",i*num);
		
	printf("\n");	
	
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/C$ cc Program4.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/C$ ./a.out

Enter a number : -3

Enter positive number !! 
Enter a number : 5

Table of 5 is :: 

 5  10  15  20  25  30  35  40  45  50

*/
