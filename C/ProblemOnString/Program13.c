/*
Problem Statement : 

13.Write a program to check whether given strings are Anagram strings or not.   

	Input : abccd cbcda   Output : Strings are anagram   

*/

#include<stdio.h>

int stringLength(const char *str)
{
	int count=0;
	
	while(*str!='\0') {
		count++;
		str++;
	}
	
	return count;
}

void sort(char str[])
{
	char ch;
	for(int i=0;i<stringLength(str);i++)
	{
		for(int j=0;j<stringLength(str);j++)
		{
			if(str[i]<str[j])
			{
				ch=str[i];
				str[i]=str[j];
				str[j]=ch;
			}
		}
	}
	
}



int stringCompare(const char * str1,const char * str2) {
	
	while( *str1 != '\0' ) {
	
		if( *str1 == *str2 )
		{
			str1++;
			str2++;
		}
		else
			return *str1-*str2;
	}
	return 0;
}



int anagramString(char *str1,char *str2)
{
	sort(str1);
	sort(str2);
	if(stringCompare(str1,str2)==0)
		printf("\nStrings are anagram\n");
	else
		printf("\nStrings are not anagram\n");
}


void main () {

	char str1[30],str2[30];
	
	printf("\nEnter first string : ");
	scanf("%s",str1);
	
	printf("\nEnter second string : ");
	scanf("%s",str2);
	
	if(stringLength(str1)!=stringLength(str2))
		printf("\nStrings are not anagram as length is different! \n ");
	else
		anagramString(str1,str2);	
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program13.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : heart

Enter second string : earth

Strings are anagram
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : level

Enter second string : levels

Strings are not anagram as length is different! 

*/
