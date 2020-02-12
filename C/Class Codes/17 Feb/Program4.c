// If-else statement 

#include<stdio.h>

void main() {

	int age=10;
	
	if(age)
		printf("\nAge is : %d ",age);
	else
		printf("\nOut of if statement! ");
		
	age=-10;
	if(age)
		printf("\nAge is : %d ",age);
	else
		printf("\nOut of if statement! ");


	age=0;
	if(age)
		printf("\nAge is : %d ",age);
	else
		printf("\nOut of if statement! ");

	
	char ch='a';
	
	if(ch)
		printf("\nCharacter : %c ",ch);
	else
		printf("\nOut of if statement! ");
					
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/17 Feb$ gcc Program4.c
mayuri@mayuri-PC:~/C2WT/Class Codes/17 Feb$ ./a.out

Age is : 10 
Age is : -10 
Out of if statement! 
Character : a m


*/
