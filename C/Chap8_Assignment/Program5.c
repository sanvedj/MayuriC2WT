/*
Problem Statement : 

Write a program in C to copy the contents of file1 into file2 (write a cp call of your own) 

*/


#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp1,*fp2;
	char ch;

	fp1=fopen("file2.txt","r");
	fp2=fopen("file3.txt","w");
	
	if(fp1==NULL || fp2==NULL) {
		
		printf("\nUnable to open the file \n");
		exit(1);
	} else {
	
		while((ch=fgetc(fp1))!=EOF) {
		
			fputc(ch,fp2);
		}
		fclose(fp1);
		fclose(fp2);
	}
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program5.c 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ cat file2.txt
Core to Web Technologies.
You must know the code till the core :) 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ cat file3.txt
Core to Web Technologies.
You must know the code till the core :) 

*/
