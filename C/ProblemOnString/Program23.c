/*
Problem Statement : 

23.Write a program which accept string from user and then reverse the string till first N characters without taking another string.   

	Input : Hello World 5   Output : olleH World   
*/

#include<stdio.h>

char* stringReverse(char *str,int n) {

	char *temp=str;
	char ch;
	
	while( n>0) {
		str++;
		n--;
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

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program23.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : Hello World

Enter number of characters : 5

Reversed string is : olleH World


*/
