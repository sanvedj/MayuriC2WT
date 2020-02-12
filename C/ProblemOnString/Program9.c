/*
Problem Statement : 

9.Write a program which accept sentence from user and position from user and print the word at that position.   

	Input : is my he she 3   Output : he   

*/

#include<stdio.h>

void word(char *str,int pos) {

	int count=0,flag=0;
	
	char str1[30];
	char *temp=str1;
	
	while (*str!='\0') {
	
		if( *str== ' ')
		{
			count++;
		}
		else if(count==pos)
		{
			while(  (*str>=65 && *str<=90 ) || (*str>=97 && *str<=122) ) {
				
				*temp=*str;
				str++;
				temp++;
			}
			*temp='\0';
			printf("Word is : %s\n",str1);
			break;
		}
		str++;	
	}
	
}


void main () {

	char str[40];
	int pos;
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	printf("\nEnter the position : ");
	scanf("%d",&pos);
	
	word(str,pos-1);
	
}

/*
OUTPUT :


mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program9.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : My name is mayuri

Enter the position : 2
Word is : name


*/
