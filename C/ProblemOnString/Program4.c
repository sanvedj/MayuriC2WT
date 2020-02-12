/*
Problem Statement : 

4.Write a program which accept sentence from user and print length of that sentence (Implement strlen()).   
	
	Input : India is my   Output : 11   

*/

#include<stdio.h>

int stringLength(const char *str) {

	int count=0;
	while( *str != '\0' ) {
	
		count ++;
		str ++;
	}
	return count;
}

void main () {

	char str[20];
	
	printf("\nEnter a sentence : ");
	scanf("%[^\n]",str);
	
	printf("\nThe length is : %d \n",stringLength(str));
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program4.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a sentence : Mayuri Nanaware

The length is : 15 

*/
