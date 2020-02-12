/*
Problem Statement : 

11.Write a program to convert the string from lower case to upper case (Implement strupr()).   
	
	Input : DevIce DriVer   Output : DEVICE DRIVER  
*/

#include<stdio.h>

char * strUpper(char *str) {

	while (*str!='\0') {
		
		if( *str>=97 && *str<=122 )
			*str=*str-32;
		
		str++;		
	}
	return str;
}

void main () {

	char str[30];
	printf("\nEnter a string : ");
	fgets(str,30,stdin);
	
	strUpper(str);
	printf("\nString in upper case : %s",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program11.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : deVice Driver

String in upper case : DEVICE DRIVER



*/
