/*
Problem Statement :

29.Write a program which sets all characters in string to a specific character (Implement strset()).   

	Input : HelloWorld a   Output : aaaaaaaaaa   

*/

#include<stdio.h>

char * stringSet( char *str ,char ch ) {

	while ( *str != '\0' ) {
		
		*str=ch;
		str++;
	}
	
	return str;
}

void main() {

	char str[30],ch;
		
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	printf("\nEnter the character : ");
	scanf(" %c",&ch);
	stringSet(str,ch);
	printf("\n\tAfter set operation string is : %s\n",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program29.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : HelloWorld

Enter the character : a

	After set operation string is : aaaaaaaaaa
*/
