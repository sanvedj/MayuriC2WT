/*
Problem Statement :

Program 2: Write a Program to convert entered Binary Number to Hexadecimal
Number.
Input: Binary Number: 1011
Output: Hexadecimal Number: B

*/

#include<stdio.h>

void main() {

	int num,temp,ans=0;
	printf("\nEnter a binary number : ");
	scanf("%d",&num);
	
	int n=1;
	 
	while(num) {
		
		temp=num % 10;
		num=num/10;
		
		if(temp==1)
			ans=ans+n;
	
		n=n*2;
		
	}
	
	printf("\nDecimal number :: %d\n",ans);
	printf("Hexadecimal number :: %X\n",ans);
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ cc Program2.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ ./a.out

Enter a binary number : 1011

Decimal number :: 11
Hexadecimal number :: B
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ ./a.out

Enter a binary number : 11010

Decimal number :: 26
Hexadecimal number :: 1A


*/
