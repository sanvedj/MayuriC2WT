/*
Problem Statement : 

12.Write a program which toggles the case of a string.   

	Input : DevIce DriVer   Output : dEViCE dRIvER   

*/
#include<stdio.h>

char * strToggle(char *str) {

	while (*str!='\0') {
		
		
		if( *str>=65 && *str<=90 )
			*str=*str+32;
		else if( *str>=97 && *str<=122 )
			*str=*str-32;
		
		str++;		
	}
	return str;
}

void main () {

	char str[30];
	printf("\nEnter a string : ");
	fgets(str,30,stdin);
	
	strToggle(str);
	printf("\nString after toggling : %s",str);
}


/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program12.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : dEVICe dRIVEr

String after toggling : DevicE DriveR
*/
