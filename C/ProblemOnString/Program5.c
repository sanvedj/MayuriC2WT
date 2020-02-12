/*
Problem Statement : 

5.Write a program which accept sentence from user and print number of white spaces from that sentence.   

	Input : In my company   Output : 2    

*/

#include<stdio.h>
#include<string.h>

void main () {
	
	char str[50];
	int count=0;
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	for(int i=0;i<strlen(str);i++)
	{
		if( str[i] == ' ' )		// str[i]==32 
			count++;
	}
	
	printf("\nWhite space count is : %d ",count);
	
	printf("\n");
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program5.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : my name is mayuri

White space count is : 3 

*/
