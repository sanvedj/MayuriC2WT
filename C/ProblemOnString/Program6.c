/*
Problem Statement : 

6.Write a program which accept sentence from user and print number of words from that sentence.   

	Input : In my company   Output : 3  

*/

#include<stdio.h>

void words(const char *str) {

	int count=0,flag=0;
	
	while( *str!= '\0') {
	
		if( *str == ' ' )
		{
			flag=0;	
		}
		else if( flag== 0)
		{
			flag=1;
			count++;
		}
		str++;
	}
	
	printf("\nNumber of words are : %d\n",count);
	
}


void main () {
	
	char str[50];
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	words(str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program6.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : My name  is  mayuri

Number of words are : 4

*/
