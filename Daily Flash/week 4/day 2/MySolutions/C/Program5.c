/*
Problem Statement :

Program 5: Write a Program that computes sum of all possible divisors of an
entered number.
Input: 25
Output: The of all possible divisors of 24 is : 39

*/

#include<stdio.h>

void main() {

	int num,sum=0;
	
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	for(int i=1;i<num;i++) {
		
		if(num % i == 0)
			sum=sum+i;
		
	}
	
	printf("\nThe sum of aa possible divisors of %d is : %d \n\n",num,sum);
}


/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ cc Program5.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ ./a.out

Enter a number : 24

The sum of aa possible divisors of 24 is : 36 


*/
