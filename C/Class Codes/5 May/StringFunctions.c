#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {

	char str1[30],str2[30],str3[50],ch;
	int n;
	
	puts("Enter first string : ");
	scanf("%s",str1);
	
	puts("Enter second string : ");
	scanf("%s",str2);
	
	printf("\nThe first string is : %s ",str1);
	printf("\nThe second string is : %s ",str2);
	
	printf("\n\nLength of string %s is %d",str1,strlen(str1));
	printf("\nLength of string %s is %d",str2,strlen(str2));

	strcpy(str3,str1);
	printf("\n\nThe string(S1) %s is copied into string(S3) %s",str1,str3);
	
	
	if(strcmp(str1,str2)==0)
		printf("\n\nStrings are equal");
	else
		printf("\n\nStrings are not equal");
	
	
	if(strcasecmp(str1,str2)==0)
		printf("\n\nStrings are equal");
	else
		printf("\n\nStrings are not equal");
	
	/*
	strupr(str2);
	printf("\n\nAfter converting to upper case %s ",str1);
	strlwr(str1);
	printf("\nAfter converting to lower case %s ",str1);
	
	printf("\n\nEnter a character to replace string : ");
	scanf(" %c",&ch);
	strset(str2,ch);
	printf("\nAfter string set : %s ",str2);
	*/
	
	printf("\n\nEnter a number of letters to be copied : ");
	scanf(" %d",&n);
	strncpy(str3,str1,n);
	*(str3+n)='\0';
	printf("\nString after copying %d alphabets is %s ",n,str3);
	
	strcat(str1,str2);
	printf("\n\nConcatenated string is : %s ",str1);
	
	
	// strrev(str2);					//depricated function
	
	printf("\n\n");


}

/*

OUTPUT :


mayuri@snowflake:~/C2WT/ClassCodes/5May$ gcc StringFunctions.c
mayuri@snowflake:~/C2WT/ClassCodes/5May$ ./a.out
Enter first string : 
mayuri
Enter second string : 
nanaware

The first string is : mayuri 
The second string is : nanaware 

Length of string mayuri is 6
Length of string nanaware is 8

The string(S1) mayuri is copied into string(S3) mayuri

Strings are not equal

Strings are not equal

Enter a number of letters to be copied : 4

String after copying 4 alphabets is mayu 

Concatenated string is : mayurinanaware 



*/
