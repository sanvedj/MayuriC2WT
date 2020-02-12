/*
Problem Statement : 

16.Write a program which accept string from user and accept number N then copy last N character into some another string.   

	Input : India is my 5   Output : is my

*/

#include<stdio.h>

int stringLength (const char *str){
	
	int count=0;
	
	while (*str!='\0') {
	
		count++;
		str++;
	}	
	return count;
}

char * stringCopy(char *str1,const char * str,int n) {

	int count=0;
	int len=0;
	
	len=stringLength(str);
	
	
	count=len-n;
	
	while ( count > 0 ) {
		str++;
		count--;
	}	
	
	while ( n > 0 ) {
	
		*str1=*str;
		str++;
		str1++;
		n--;
	}	
	*str1='\0';
	
	return str1;
}


void main () {

	char str[30],str1[30];
	int n;

	printf("\nEnter a string : ");
	scanf("%[^\n]",str);
	printf("\nEnter number of characters to be copied : ");
	scanf("%d",&n);
	
	stringCopy(str1,str,n);
	printf("\nAfter copying : %s\n",str1);
	
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ProblemOnString$ gcc Program16.c
mayuri@snowflake:~/C2WT/ProblemOnString$ ./a.out

Enter a string : My name is Mayuri

Enter number of characters to be copied : 9

After copying : is Mayuri


*/
