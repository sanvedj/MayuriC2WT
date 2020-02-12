/*
Problem Statement : 

 Write a program in C to create a file which will have “ HELLO WORLD ” string written into
it 

*/


#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp;
	char *str="HELLO WORLD";
	
	fp=fopen("file1.txt","w");
	
	if(fp==NULL) {
		printf("\nUnable to open file! \n");
		exit(1);
	} else {
		
		while(*str!='\0') {
			
			fputc(*str,fp);
			str++;
		}
		printf("\nSuccessfully written to file! \n");
		fclose(fp);
	}
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program2.c 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out

Successfully written to file! 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ cat file1.txt
HELLO WORLD

*/
