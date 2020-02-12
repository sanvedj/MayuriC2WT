/*
Problem Statement : 

21.Write a program which accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch character (Implement stricmp()).   

	Input : FirStr FIRStR   Output : Both strings are equal.   


*/

#include<stdio.h>

int stringCaseCompare(const char *str1,const char *str2) {

	while( *str1 != '\0' ) {
	
		if( *str1 == *str2 || *str1-*str2 == -32 || *str1-*str2 == 32) {
			str1++;
			str2++;
		}
		else
			return *str1-*str2;
	}
	return 1;
}

void main () {

	char str1[30],str2[30];
	
	printf("\nEnter first string : ");
	scanf("%s",str1);
	
	printf("\nEnter second string : ");
	scanf("%s",str2);
	
	if (stringCaseCompare(str1,str2)==1)
		printf("\nStrings are equal\n");
	else
		printf("\nStrings are not equal\n");	
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program21.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : Mayuri

Enter second string : mayuri

Strings are equal



*/
