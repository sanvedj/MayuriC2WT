/*
Problem Statement :


33.Write a program which accept string from user and search last occurrence of specific character in string and return the position at which character is found (Implement strchr()).   

*/

#include<stdio.h>

int stringFind( char *str ,char ch) {

	int pos=0;
	
	while(*str!='\0')
	{
		pos++;
		str++;
	}
	str--;
	
	while(1) {
	
		pos--;
		if(*str==ch)
			return pos+1;
		str--;
	} 
	
}

void main() {

	char str[30],ch;
	int pos;
		
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	printf("\nEnter the character to be searched : ");
	scanf(" %c",&ch);
	
	
	pos=stringFind(str,ch);
	printf("\n\tLast occurance of character %c found at position %d\n",ch,pos);
}

/*
OUTPUT :


mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program33.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : my name is mayuri

Enter the character to be searched : m

	Last occurance of character m found at position 12


*/
