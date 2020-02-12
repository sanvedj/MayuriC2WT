/*
Problem Statment : 

Program 1: Write a program to print squares of first 10 numbers.

*/

#include<stdio.h>

void main() {

	printf("\nSquare of first 10 numbers is : \n");
	
	for(int i=1;i<=10;i++) 
		printf("Square of %d is  : %d\n",i,i*i);
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/C$ cc  Program1.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 2/MySolutions/C$ ./a.out

Square of first 10 numbers is : 
Square of 1 is  : 1
Square of 2 is  : 4
Square of 3 is  : 9
Square of 4 is  : 16
Square of 5 is  : 25
Square of 6 is  : 36
Square of 7 is  : 49
Square of 8 is  : 64
Square of 9 is  : 81
Square of 10 is  : 100



*/
