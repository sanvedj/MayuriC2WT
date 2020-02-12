/*
Problem Statement : 

20.Write a program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character (Implement strncmp()).   

	Input : FirStr FirNew 3   Output : Both strings are equal. 

*/

#include<stdio.h>

int stringNCom(char *str1,char * str2, int n)
{
	int flag=0;
	while( n > 0 ) {
		
		if(*str1==*str2)
			flag=1;
		else
			flag=0;
		str1++;
		str2++;
		n--;		 
	}
	
	return flag;
}

void main () {

	char str1[30],str2[30];
	int n;
	
	printf("\nEnter first string : ");
	scanf("%s",str1);
	
	printf("\nEnter second string : ");
	scanf("%s",str2);
	
	printf("\nEnter number of characters to compare : ");
	scanf("%d",&n);
	
	if (stringNCom(str1,str2,n)==1)
		printf("\nStrings are equal\n");
	else
		printf("\nStrings are not equal\n");	
}

/*
OUTPUT :


mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program20.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : stringone

Enter second string : stringtwo

Enter number of characters to compare : 7

Strings are not equal


mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : stringone

Enter second string : stringtwo

Enter number of characters to compare : 6

Strings are equal



*/
