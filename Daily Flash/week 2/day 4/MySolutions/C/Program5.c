/*

Problem Statemnt : 

Program 5: Write a C program to calculate the factorial of a given number.
Input: 5
Output:
The Factorial of 5 is: 120

*/

#include<stdio.h>

void main() {

	int num,fact=1;
	
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	printf("\nFactorial of %d is :  ",num);
	
	while(num) {
		
		fact=fact*num;
		num--;
	}
	printf("%d \n",fact);
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ cc Program5.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 4/MySolutions/C$ ./a.out

Enter a number : 5

Factorial of 5 is :  120 


*/
