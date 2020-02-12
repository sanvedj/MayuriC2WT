/*
Problem Statement : 

28.Write a program which accept string from user and check whether string is palindrome or not.   

	Input : level    Output : String is palindrome

*/


#include<stdio.h>
int palindrome(char *str) {

	char *temp=str;
	int flag=0;
	while(*str!= '\0')
	{
		str++;
	}
	str--;
	
	while(temp<str)
	{
		if(*temp==*str)
			flag=1;
		else
			return 0;
			
		str--;
		temp++;		
	}
	
	return flag;
	
}

void main() {
	
	char str[30];
	int flag;
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	flag=palindrome(str);
	if(flag==1)
		printf("\nString is palindrome! \n");
	else
		printf("\nString is not palindrome! \n");
		
}

/*

OUTPUT : 

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program28.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : level

String is palindrome! 
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : levels

String is not palindrome! 


*/
