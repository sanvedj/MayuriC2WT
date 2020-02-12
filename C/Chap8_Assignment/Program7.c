/*
Problem Statement : 

Write a program in C to print the contents of the file but in a reverse order .

*/


#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp;

    	int cnt = 0;
    	int i   = 0;	
    	fp=fopen("file2.txt","r");

	
	if(fp==NULL) {
	
		printf("\nUnable to open file");
		exit(1);
	} else {
		
		fseek(fp,0,SEEK_END);
	 	cnt = ftell(fp);
     
	    while( i < cnt )
	    {
	        i++;
	        fseek(fp,-i,SEEK_END);
	        printf("%c",fgetc(fp));
	    }
	    
	    printf("\n");
	    fclose(fp);
	}

}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program7.c
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out

 ): eroc eht llit edoc eht wonk tsum uoY
.seigolonhceT beW ot eroC

 
*/
