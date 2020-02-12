/*
Problem Statement : 

Program 1: Write a program that accepts two integers from user and prints addition & Subtraction of them.
{Note: checks for greater number to subtracts with while subtracting numbers}

Input: 10 20

Output:
Addition is 20
Subtraction is 10

*/

#include<stdio.h>

void main() {

	int num1,num2;
	
	printf("\nEnter two numbers : ");
	scanf("%d %d",&num1,&num2);
	
	printf("\nAddition is : %d",num1+num2);
	
	if(num1>=num2)
		printf("\nSubstraction is : %d\n\n",num1-num2);
	else
		printf("\nSubstraction is : %d\n\n",num2-num1);	
	 	
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ cc Program1.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ ./a.out

Enter two numbers : 5
10

Addition is : 15
Substraction is : 5


*/
