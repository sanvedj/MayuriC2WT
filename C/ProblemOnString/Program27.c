/*
Problem Statement : 

27.Write a program which accept string from user and reverse words from that string which are of even length.   

	Input : New HO abcd can  Output : New OH dcba can 

*/


#include<stdio.h>
#include<string.h>

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

char * stringReverse(char *str) {

	int count=0;
	char *temp;
	
	while (*str!= '\0')
	{
		if( *str== ' ' )
		{
			str++;
		}
		else
		{
			temp=str;
			
			count=0;	
			while ( (*str>=65 && *str<=90 ) || ( *str>=97 && *str<=122 ) )
			{
				count++;
				str++;
			}
						
			if(count%2==0)
			{
				str--;
				reverse(temp,str);
			}
			
		}	
	}
}


void main() {
	
	char str[30];
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	stringReverse(str);
	printf("\n\nReversed : %s\n",str);

}

/*

OUTPUT : 

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program27.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : hi how was your day


Reversed : ih how was ruoy day


*/
