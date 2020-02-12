#include<stdio.h>

void main() {

	printf("\nProgram 3 : Write a Program that accepts a n inte ger from user and prints whether that number is odd or even.\n");
	
	int num;
	printf("\n\nEnter a number : ");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("\n%d is an even number\n\n",num);
	else
		printf("\n%d is an odd number\n\n",num);	
}

/*

Output :


(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ cc Program3.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ ./a.out

Program 3 : Write a Program that accepts a n inte ger from user and prints whether that number is odd or even.

Enter a number : 12

12 is an even number


*/
