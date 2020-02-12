/*
Problem Statement :

Program 2: Write a Program to Convert entered Binary Number to Octal
Number
Input: Binary Number: 1011
Output: Octal Number: 13

*/


#include<stdio.h>

void main() {

	int num,ans=0,temp,n=1;
	printf("\nEnter a binary number : ");
	scanf("%d",&num);
	
	while(num) {
	
		temp=num%10;
		num=num/10;
		
		if(temp==1)
			ans=ans+n;
			
		n=n*2;	
	}
	
	printf("\nOctal Number : %o  \n",ans);
}



/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ cc Program2.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ ./a.out

Enter a binary number : 1011

Octal Number : 13  
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 3/MySolutions/C$ ./a.out

Enter a binary number : 1000

Octal Number : 10  

*/
