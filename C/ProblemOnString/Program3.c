/*
Problem Statement : 

3.Write a program which accept sentence from user and print number of small letters, capital letters and digits from that sentence.   

	Input : abcDE 5Glm1 O   Output : Small:5 Capital: 4 Digits: 2   
	
*/

#include<stdio.h>


void compute(const char *str) {

	int small=0,capital=0,digit=0;
	
	while (*str != '\0')
	{
		if(*str>=65 && *str<=90)
			capital++;
		else if( *str>=97 && *str <=122)
			small++;
		else if( *str>=48 && *str<=57)			//ascii value of digits from 0-9 is 48-57
			digit++;
		
		str++;				
	}
	
	printf("\nSmall letters   : %d ",small);
	printf("\nCapital letters : %d ",capital);
	printf("\nDigits	  : %d ",digit);
	
}

void main () {
	
	char str[50];
	
	printf("\nEnter a sentence : ");
	fgets(str,50,stdin);
	
	compute(str);
	printf("\n");
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program3.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : Mayuri 123  

Small letters   : 5 
Capital letters : 1 
Digits	  : 3 


*/
