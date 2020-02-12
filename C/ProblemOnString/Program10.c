/*
Problem Statement : 

10.Write a program to convert the string from upper case to lower case (Implement strlwr()).   

	Input : DevIce DriVer   Output : device driver

*/

#include<stdio.h>

char * strLower(char *str) {

	while (*str!='\0') {
		
		if( *str>=65 && *str<=90 )
			*str=*str+32;
		
		str++;		
	}
	return str;
}

void main () {

	char str[30];
	printf("\nEnter a string : ");
	fgets(str,30,stdin);
	
	strLower(str);
	printf("\nString in lower case : %s",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program10.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : Device DRiver

String in lower case : device driver


*/
