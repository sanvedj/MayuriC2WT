/*
Problem Statement : 

18.Write a program which accept two strings from user and append N characters of second string after first string(Implement strncat()).   

	Input : FirStr SecStr 4   Output : FirStrSecS 

*/

#include<stdio.h>

char * stringNCat(char *str1,char* str2,int n) {

	while(*str1 != '\0')
		str1++;

	while( n>0)
	{
		*str1=*str2;
		str1++;
		str2++;
		n--;
	}	
	
	*str1='\0';
	return str1;
}

void main () {

	char str1[30],str2[30];
	int n;
	
	printf("\nEnter first string : ");
	scanf("%s",str1);
	
	printf("\nEnter second string : ");
	scanf("%s",str2);
	
	printf("\nEnter number of characters to be concatenated : ");
	scanf("%d",&n);
	
	stringNCat(str1,str2,n);
	printf("\nAfter concatenation : %s\n",str1);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program18.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : C

Enter second string : Programing

Enter number of characters to be concatenated : 5

After concatenation : CProgr

*/
