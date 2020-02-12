/*
Problem Statement : 

Program 2: Write a program that accepts two integers from user and prints multiplication & Division of them.
{Note: checks for smaller divisor amongst entered number while computingdivision}

Input: 10 20

Output:
Multiplication is 200
Division is 2

*/

#include<stdio.h>

void main() {

	int num1,num2;
	
	printf("\nEnter two numbers : ");
	scanf("%d %d",&num1,&num2);
	
	printf("\nMultiplication is : %d",num1*num2);
	
	if(num1>=num2)
		printf("\nDivision is : %d\n\n",num1/num2);
	else
		printf("\nDivision is : %d\n\n",num2/num1);	
	 
	
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ cc Program2.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ ./a.out

Enter two numbers : 5
10

Multiplication is : 50
Division is : 2


*/
