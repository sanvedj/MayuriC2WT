#include<stdio.h>

void fibo(int n) {

	int a=0,b=1,c;
	
	printf("\nFibonacci series : %d %d ",a,b);
	
	for(int i=1;i<=n-2;i++) {
		
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}	

}

void main() {

	printf("\nFibonacci series of n elements : \n");
	
	int num;
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	fibo(num);
	printf("\n\n");
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ cc Program1.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ ./a.out

Fibonacci series of n elements : 

Enter a number : 8

Fibonacci series : 0 1 1 2 3 5 8 13 


*/
