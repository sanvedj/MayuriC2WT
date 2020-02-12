/*
Problem Statement : 

Program 4: Write a Program to simulate simple calculator. Accept two integers from user and sign of operation to perform.

Input:
Enter First Number: 10
Enter Second Number: 20
Enter the sign of Operation: +

Output: Addition of 10 & 20 is 30.

*/

#include<stdio.h>

void main() {

	int num1,num2;
	char sign;
	
	printf("\nEnter first number : ");
	scanf("%d",&num1);
	printf("\nEnter second number : ");
	scanf("%d",&num2);
	
	printf("\nEnter sign of operation : ");
	scanf(" %c",&sign);
	
	switch(sign) {
		
		case '+' :
			printf("\nAddition is : %d\n",num1+num2);
		break; 
		
		
		case '-' :
		
			if(num1>=num2)
				printf("\nSubstraction is : %d\n\n",num1-num2);
			else
				printf("\nSubstraction is : %d\n\n",num2-num1);	
			 
		break; 
		
		
		case '/' :
			
			if(num1>=num2)
				printf("\nDivision is : %d\n\n",num1/num2);
			else
				printf("\nDivision is : %d\n\n",num2/num1);	
		break; 
		
		
		case '*' :
			printf("\nMultiplication is : %d\n\n",num1*num2);
		break; 
		
		
		default :
			printf("\nWrong sign input\n");
	}
	
	
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ cc Program4.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ ./a.out

Enter first number : 7

Enter second number : 2

Enter sign of operation : *

Multiplication is : 14


*/
