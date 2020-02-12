/*
Problem Statement : 

8.Write a program which accept sentence from user and print last word from that sentence.   

	Input : In my company   Output : company   


*/

#include<stdio.h>

char * stringReverse(char *str)
{
	char *temp=str;
	char ch;
	
	
	while(*str!='\0')
	{
		str++;
	}
	
	str--;
	
	while(temp<str)
	{
		ch=*str;
		*str=*temp;
		*temp=ch;
			
		str--;
		temp++;
	}
	
	return str;
}

void lastWord( char *str ) {


	char temp[30];
	char *t=temp;
	while( *str != '\0')
		str++;
		
	str--;
	
	while( *str != ' ')
	{	
		*t = *str;
		t++;
		str--;
	}
	*t='\0';
	stringReverse(temp);
	printf("\nLast word is : %s\n",temp);
}



void main () {

	char str[40];
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	lastWord(str);
	
}

/*
OUTPUT :


mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program8.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : my name is Mayuri

Last word is : Mayuri


*/
