/*
Problem Statement : 

Program 3: Write a program that accepts two integers from user and prints addition of their Cubes and subtraction of their Squares.

Input: 10 20

Output:
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300

*/

#include<stdio.h>

int square(int num) {
	return (num*num);
}


int cube(int num) {
	return (num*num*num);
}

void main() {

	
	int num1,num2,c1,c2,s1,s2;
	
	printf("\nEnter two numbers : ");
	scanf("%d %d",&num1,&num2);
	
	c1=cube(num1);
	c2=cube(num2);
	
	s1=square(num1);
	s2=square(num2);
	
	
	printf("\nAddition of %d and %d is : %d",c1,c2,c1+c2);
	printf("\nSubstraction of %d and %d is : %d\n\n",s1,s2,s1-s2);
	
	
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ cc Program3.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 3/MySolutions/C$ ./a.out

Enter two numbers : 10
20

Addition of 1000 and 8000 is : 9000
Substraction of 100 and 400 is : -300


*/
