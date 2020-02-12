/*
Problem Statement : 

17.Write a program which accept two strings from user and append second string after first string(Implement strcat()).   

	Input : FirStr SecStr   Output : FirStrSecStr   

*/

#include<stdio.h>

char * stringConcatenate(char *str,char *str1)
{
	while( *str != '\0' )
		str++;
		
	while( *str1 != '\0' ) {
		
		*str = *str1;
		str++;
		str1++;
	}
	
	*str='\0';
	return str;
}

void main () {

	char str1[30],str2[30];
	
	printf("\nEnter first string : ");
	scanf("%s",str1);
	
	printf("\nEnter second string : ");
	scanf("%s",str2);
	
	stringConcatenate(str1,str2);
	printf("\nAfter concatenation : %s\n",str1);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program17.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : mayuri

Enter second string : nanaware

After concatenation : mayurinanaware

*/
