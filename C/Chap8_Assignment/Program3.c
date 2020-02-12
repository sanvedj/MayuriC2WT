/*
Problem Statement : 

Write a program in C to write your name in the file1 and use another file file2 and read
the contents of file2 and display on the screen(terminal).

*/


#include<stdio.h>
#include<stdlib.h>


void main() {

	FILE *fp1,*fp2;
	char ch;
	char *str="Mayuri Nanaware";
	
	fp1=fopen("file1.txt","w");
	fp2=fopen("file2.txt","r");
	
	if(fp1==NULL || fp2==NULL) {
	
		printf("\nUnable to open the file");
		exit(1);	
	} else {
		
		while(*str!='\0') {
			fputc(*str,fp1);
			str++;
		}
		
		while((ch=fgetc(fp2))!=EOF) {
		
			printf("%c",ch);
		}
		printf("\n");
		fcloseall();
	}

}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program3.c 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out
Core to Web Technologies.
You must know the code till the core :) 

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ cat file1.txt
Mayuri Nanaware

*/
