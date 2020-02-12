/*
Problem Statement : 

Write a program which accepts a string from user which contains a characters from b to y.   

	Input : mn jn kn kazfd  Output : mn jn kn k   
	
*/

#include<stdio.h>

void characters(const char *str) {

	while (*str != '\0')
	{
		if(*str== 'a' || *str== 'z')
			str=str+1;
		else
		{
			printf(" %c",*str);
			str=str+1;	
		}	
	}
}

void main () {

	char str[30];
	
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	
	printf("\nString is : %s ",str);
	
	printf("\nOutput (characters from b to y only ) : ");
	
	characters(str);

	printf("\n");
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program2.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : mayuri

String is : mayuri 
Output (characters from b to y only ) :  m y u r i

mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : zig-zack

String is : zig-zack 
Output (characters from b to y only ) :  i g - c k


*/
