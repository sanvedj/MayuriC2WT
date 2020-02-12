/*
Problem Statement :

32.Write a program which accept string from user and search first occurrence of specific character in string and return the position at which character is found (Implement strchr()).   

	Input : India is my country. M Output : Character m is found at position 1  	
*/

#include<stdio.h>

int stringFind( char *str ,char ch) {

	int pos=0;
	while( *str!= '\0')
	{
		pos++;
		if(*str==ch)
		{
			return pos;	
		}	
		
		str++;
		
	}
	return -1;
}

void main() {

	char str[30],ch;
	int pos;
		
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	printf("\nEnter the character to be searched : ");
	scanf(" %c",&ch);
	
	
	pos=stringFind(str,ch);
	if(pos==-1)
		printf("\nNot found! \n");
	else	
		printf("\n\tCharacter %c found at position %d\n",ch,pos);
}

/*
OUTPUT :


mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program32.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : my name is mayuri

Enter the character to be searched : a

	Character a found at position 5
	
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : mayuri

Enter the character to be searched : z

Not found! 


*/
