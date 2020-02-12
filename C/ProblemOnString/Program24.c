/*
Problem Statement : 

24.Write a program which accept string from user and then reverse the string till last N characters without taking another string.   

	Input : Hello World 5   Output : Hello dlroW  
*/

#include<stdio.h>


int length(const char * str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	
	return count;
}

char* stringReverse(char *str,int n) {

	char ch;
	int len,count;
	
	len=length(str);
	count=len-n;
	
	
	while( count > 0) {
		str++;
		count--;
	}
	
	
	char *temp=str;
	
	
	while(*str!='\0')
	{
		str++;
	}
	str--;
	
	while(temp<str)
		{
			ch=*temp;
			*temp=*str;
			*str=ch;
		
			str--;
			temp++;
		}
	
	return str;
}

void main () {

	char str[30];
	int n;
	
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	
	printf("\nEnter number of characters : ");
	scanf("%d",&n);
	
	stringReverse(str,n);
	printf("\nReversed string is : %s\n",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program24.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : Hello World

Enter number of characters : 5

Reversed string is : Hello dlroW


*/
