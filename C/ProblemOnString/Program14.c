/*
Problem Statement : 


14.Write a program which accept string from user and copy that string into some another string (Implement strcpy()).   

*/

#include<stdio.h>


char * stringCopy(char *str1,const char *str) {

	while(*str != '\0') {
	
		*str1 = *str;
		str++;
		str1++;
	}
	
	*str1='\0';
	return str1;
}


void main () {

	char str1[30],str2[30];
	
	printf("\nEnter a string : ");
	fgets(str1,30,stdin);
	
	stringCopy(str2,str1);
	printf("\nAfter copying : %s",str2);
}

/*
OUTPUT :


mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program14.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : C programming

After copying : C programming


*/
