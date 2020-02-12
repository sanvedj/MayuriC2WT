/*
Problem Statement : 

Write a program in C to copy the contents of one file into the another file but a reverse
manner. IF the file1 contains “ hello world ” file2 should contain “ dlrow olleh ”

*/


#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp,*fp1;
	char ch;
    	int cnt = 0;
    	int i   = 0;	
    	
    	fp=fopen("file2.txt","r");
	fp1=fopen("file4.txt","w");
	
	if(fp==NULL || fp1==NULL) {
	
		printf("\nUnable to open file");
		exit(1);
	} else {
		
		fseek(fp,0,SEEK_END);
	 	cnt = ftell(fp);
     
	    while( i < cnt )
	    {
	        i++;
	        fseek(fp,-i,SEEK_END);
	        ch=fgetc(fp);
	        fputc(ch,fp1);
	    }
	    
	    printf("\nSuccessfully copied ! \n");
	    fclose(fp);
	    fclose(fp1);
	}
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program8.c
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out

Successfully copied ! 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ cat file4.txt

 eroc eht llit edoc eht wonk tsum uoY
.seigolonhceT beW ot eroC

 
*/
