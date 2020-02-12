/*
Problem Statement : 

15.Write a program which accept string from user and copy first N charaters into some destination string (Implement strncpy()). 

*/

#include<stdio.h>

char * stringNCopy(char *str , const char *str1 , int n )
{
	while ( n>0 ) {
		
		*str=*str1;
		str++;
		str1++;
		n--;
	}
	*str='\0';
	return str;
}

void main () {

	char str1[30],str2[30];
	int n;
	
	printf("\nEnter a string : ");
	fgets(str1,30,stdin);
	
	printf("\nEnter number of characters to be copied : ");
	scanf("%d",&n);
	
	stringNCopy(str2,str1,n);
	printf("\nAfter copying : %s\n",str2);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program15.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : C programming

Enter number of characters to be copied : 6

After copying : C prog



*/
