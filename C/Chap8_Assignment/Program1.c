/*
Problem Statement : 

Write a program in C to create a file with your name using file handling .

*/


#include<stdio.h>
#include<stdlib.h>

void main () {

	FILE *fp;
	
	fp=fopen("mayuri.txt","w");
	
	if(fp==NULL) {
		
		printf("\nUnable to open file! \n");
		exit(1);
	} else {
	
		printf("\nFile created successfully! \n");
		fclose(fp);
	}
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program1.c 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out

File created successfully! 


*/
