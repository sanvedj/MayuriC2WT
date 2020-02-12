/*
Problem Statement :

30.Write a program which sets first N characters in string to a specific character (Implement strnset()).

	Input : HelloWorld a 8   Output : aaaaaaaald   
*/

#include<stdio.h>

char * stringSet( char *str ,char ch,int n) {

	while ( n>0) {
		
		*str=ch;
		str++;
		n--;
	}
	
	return str;
}

void main() {

	char str[30],ch;
	int n;
		
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	printf("\nEnter the character : ");
	scanf(" %c",&ch);
	printf("\nEnter the number of characters to set : ");
	scanf("%d",&n);
	stringSet(str,ch,n);
	printf("\n\tAfter set operation string is : %s\n",str);
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program30.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : HelloWorld

Enter the character : a

Enter the number of characters to set : 5

	After set operation string is : aaaaaWorld

*/
