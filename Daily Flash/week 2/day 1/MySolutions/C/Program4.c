#include<stdio.h>

void main() {

	printf("\nProgram 4 : Write a Program to accept 10 integers from user and prints the sum & average of entered numbers \n");
	
	int num,sum=0;
	float avg;
	
	printf("\n\nEnter 10 numbers : ");
	for(int i=0;i<10;i++) { 
		scanf("%d",&num);
		sum=sum+num;
	}
	
	avg=sum/10;
	
	printf("\nSum of 10 numbers is  : %d\n",sum);
	printf("\nAverage 10 numbers is : %f\n\n",avg);
}

/*

Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ cc Program4.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 1/MySolutions$ ./a.out

Program 4 : Write a Program to accept 10 integers from user and prints the sum & average of entered numbers 


Enter 10 numbers : 1 2 3 4 5 6 7 8 9 10

Sum of 10 numbers is  : 55

Average 10 numbers is : 5.000000



*/
