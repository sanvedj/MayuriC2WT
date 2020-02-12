/*
Problem Statement : 

Write a program in C to find the numbers of lines present in the file .

*/


#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp;
    	char ch;
    	int count=0;
    		
    	fp=fopen("file2.txt","r");

	
	if(fp==NULL) {
	
		printf("\nUnable to open file");
		exit(1);
	} else {
		
	    while( (ch=fgetc(fp))!=EOF )
	    {
	        if(ch=='\n')
	        	count++;
	    
	    }
	    printf("Number of lines in file are :  %d\n",count);
	    fclose(fp);
	}

}

/*
Output :


mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ cat file2.txt
Core to Web Technologies.
You must know the code till the core.
 mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program10.c
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out
Number of lines in file are :  2

 
*/	
