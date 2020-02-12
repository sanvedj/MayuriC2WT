/*
Problem Statement :

Program 5: Write a Program that accepts an integer from user and prints all of
its perfect divisors.
Input: 24
Output: Perfect Divisors of 24 are: 2 3 4 6 8 12

*/

#include<stdio.h>

void main() {

	int num;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	printf("\nPerfect divisors of %d are :\n\n",num);
	for(int i=2;i<num;i++) {
		
		if( num%i == 0) 
			printf("%d ",i);
	}
	
	printf("\n\n");
}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 5/MySolutions/C$ ./a.out

Enter the number : 20

Perfect divisors of 20 are :

2 4 5 10 



*/
