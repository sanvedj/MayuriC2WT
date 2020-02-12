#include<stdio.h>

void main() {

	printf("\nProgram 2 : Write a Program that accepts an integer from user and print Sum of all number up to entered number \n");
	
	int num,sum=0;
	printf("\n\nEnter a number : ");
	scanf("%d",&num);
	
	for(int i=0;i<=num;i++) 
		sum=sum+i;
	
	printf("\nSum of numbers upto %d is : %d\n\n",num,sum);
}

/*

Output :


(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ cc Program2.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ ./a.out

Program 2 : Write a Program that accepts an integer from user and print Sum of all number up to entered number 


Enter a number : 10

Sum of numbers upto 10 is : 55


*/
