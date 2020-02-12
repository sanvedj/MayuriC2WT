/*
Problem Statement :

Program 1: Write a Program that checks whether the entered number is a Prime Number or not.
{Note: A Prime Number is that number which is only divisible by 1 & that
number only.}
Input: 5
Output: 5 is Prime Number.

*/

#include<stdio.h>

void main() {
	
	int num,flag=0;
	
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	for(int i=2;i<num;i++) {
		
		if(num%i==0)
			flag=1;
	}
	
	if(flag==1)
		printf("\n%d is not a prime number\n",num);
	else
		printf("\n%d is a prime number\n",num);	

}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ cc Program1.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ ./a.out

Enter a number : 53

53 is a prime number
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ ./a.out

Enter a number : 12

12 is not a prime number


*/
