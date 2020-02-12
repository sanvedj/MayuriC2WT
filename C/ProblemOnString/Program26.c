/*
Problem Statement : 

26.Write a program which accept string from user and reverse words from that string.   

	Input : Hello World   Output : olleH dlroW    
	
*/

#include<stdio.h>


void reverse(char * temp,char *str)
{
	char ch;
	
	while(temp<str)
	{
		ch=*temp;
		*temp=*str;
		*str=ch;
		
		str--;
		temp++;
		
	}
	
	
}

char * stringReverseWord(char *str) {

	char *temp;
	int count=0;
	
	while (*str!= '\0')
	{
		
		if( *str==' ');
		else
		{
			temp=str;
			count=0;
			while ( (*str>=65 && *str<=90 ) || ( *str>=97 && *str<=122 ) )
			{
				str++;
				count++;
			}
			
			str--;
			reverse(temp,str);
			
			
		}
		str++;
	}
}


void main () {

	char str[30];
	
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	
	stringReverseWord(str);
	printf("\nReversed string is : %s \n",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program26.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : Hello World

Reversed string is : olleH dlroW 
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : my   name  is mayuri

Reversed string is : ym   eman  si iruyam 



*/
