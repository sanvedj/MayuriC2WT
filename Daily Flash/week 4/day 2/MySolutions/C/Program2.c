/*
Problem Statement :

Program 2: Write a Program to Convert entered Binary Number to Decimal
Number
Input: Binary Number: 1011
Output: Decimal Number: 11

*/

#include<stdio.h>

void main() {

	int num;
	int ans=0,temp,n=1;
	
	printf("\nEnter binary number :: ");
	scanf("%d",&num);
	
	while(num) {
	
		temp=num%10;
		num=num/10;
		
		if(temp == 1)
			ans=ans+n;
			
		n=n*2;		
	}
	
	printf("\nDecimal number is :  %d\n\n",ans);

}


/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ cc Program2.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ ./a.out

Enter binary number :: 1011

Decimal number is :  11

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 2/MySolutions/C$ ./a.out

Enter binary number :: 11010

Decimal number is :  26



*/
