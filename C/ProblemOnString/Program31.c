/*
Problem Statement :


31.Write a program which sets last N characters in string to a specific character          

	Input : HelloWorld a 8   Output : Heaaaaaaaa   
	
*/

#include<stdio.h>

char * stringSet( char *str ,char ch,int n) {

	
	while( *str!= '\0')
		str++;
		
	str--;
		
	while ( n>0) {
		
		*str=ch;
		str--;
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

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program31.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : Hello World

Enter the character : a

Enter the number of characters to set : 6

	After set operation string is : Helloaaaaaa


*/
