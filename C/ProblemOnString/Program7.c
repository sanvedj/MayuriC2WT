/*
Problem Statement : 

7.Write a program which accept sentence from user and print number of words of even and odd length from that sentence.   

	Input : In my company   Output : Even: 2 Odd:1   

*/

#include<stdio.h>

void words(const char *str) {

	int even=0,odd=0,flag=0,count,i,j;
	
	while( *str != '\0')
	{
		
		if( *str == ' ')
		{
			str++;
		}
		else
		{
			count=0;
			while( (*str>=65 && *str<=90 ) || (*str>=97 && *str<=122))
			{	
				count++;			
				str++;
			}			
			
			if(count%2==0)
			{
				even++;
				
			}else
			{
				odd++;
				
			}
		}
	}	
	
	printf("\nEven : %d ",even);
	printf("\nOdd  : %d \n",odd);
}

void main () {

	char str[40];
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	words(str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program7.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : My  name  is Shivani

Even : 3 
Odd  : 1 

*/
