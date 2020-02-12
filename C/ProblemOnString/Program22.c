/*
Problem Statement : 

22.Write a program which accept string from user and then reverse the string without taking another string (Implement strrev()).   
	
	Input : Hello World   Output : dlroW olleH  
*/

#include<stdio.h>

char* stringReverse(char *str) {

	char *temp=str;
	char ch;
	
	while( *str!='\0') {
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
	
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	
	stringReverse(str);
	printf("\nReversed string is : %s\n",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program22.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : C Programming

Reversed string is : gnimmargorP C

*/
