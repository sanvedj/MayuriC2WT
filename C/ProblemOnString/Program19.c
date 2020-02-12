/*
Problem Statement : 


19.Write a program which accept two strings from user and compare two strings. If both strings are equal then return 0 otherwise return difference between first mismatch character (Implement strcmp()).   
	
	Input : FirStr FirStr   Output : Both strings are equal. 

*/

#include<stdio.h>



int stringLength(const char *str) {

	int count=0;
	while( *str != '\0' ) {
	
		count ++;
		str ++;
	}
	return count;
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
	return 1;
}

void main () {

	char str1[30],str2[30];
	int flag;
	
	printf("\nEnter first string : ");
	scanf("%s",str1);
	
	printf("\nEnter second string : ");
	scanf("%s",str2);
	

	if(stringLength(str1)!=stringLength(str2))
		printf("\n\tBoth strings have different length\n");
	else {
	
		flag=stringCompare(str1,str2);
		if(flag==1)
			printf("\n\tStrings are equal..!!\n");
		else
			printf("\n\tStrings are not equal..!!\n");
			
	}	
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program19.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : mayuri

Enter second string : mayuri    

	Strings are equal..!!
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter first string : mayuri

Enter second string : shivani

	Both strings have different length

*/
