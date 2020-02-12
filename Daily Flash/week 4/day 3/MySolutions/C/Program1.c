/*
Problem Statement :

Program 1: Write a Program to print Fibonacci Series of 5 Elements.
{Note: In Fibonacci series next element is sum of previous two elements}
Output: 0 1 1 2 3.

*/


#include<stdio.h>

void fibo(int n) {

	int a=0,b=1,c;
	printf("%d %d ",a,b);
	
	for(int i=1;i<=n-2;i++) {
		
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}	
	
}


void main() {

	int num;
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	printf("\nThe fibonaci series of %d is : ",num);	
	fibo(num);
	
	printf("\n\n");
}



/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ cc Program1.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ ./a.out

Enter a number : 5

The fibonaci series of 5 is : 0 1 1 2 3 


*/
