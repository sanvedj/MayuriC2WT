/*
Problem Statement : 

25.Write a program which accept string from user and then accept range and reverse the string in that range without taking another string.   

	Input : Hello World 3 8   Output : HeoW ollrld   
	
*/

#include<stdio.h>

char* stringReverse(char *str,int n1,int n2) {

	char *temp=str;
	char ch;
	
	while( n2 > 0) {
		str++;
		n2--;
	}
	
	while(n1 > 0) {
		temp++;
		n1--;
	}
	
	
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
	int n1,n2;
	
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	
	printf("\nEnter range : ");
	scanf("%d %d",&n1,&n2);
	
	stringReverse(str,n1-1,n2-1);
	printf("\nReversed string is : %s\n",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program25.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : Hello World

Enter range : 3
8

Reversed string is : HeoW ollrld


*/
