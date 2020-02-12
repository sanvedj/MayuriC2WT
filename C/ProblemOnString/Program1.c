/*
Problem Statement : 

1.Write a program which accept sentence from user and print that sentence.   

	Input : My name is   Output : My name is

*/

#include<stdio.h>
#include<string.h>

void main () {

	char sentence[50];
	
	printf("\n\nEnter a sentence : ");
	fgets(sentence,50,stdin);			// char* fgets(char *str,int n,FILE *stream)
	
	printf("\n%s",sentence);
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",sentence);			// [^\n]- escape sequence / regular expression	
	printf("\n%s",sentence);			// [^\n]- escape sequence / regular expression

	
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program1.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out


Enter a sentence : My name is Mayuri

My name is Mayuri

Enter a sentence : My name is

My name is


*/
