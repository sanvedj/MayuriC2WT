#include<stdio.h>
#include<stdlib.h>

void main() {

	FILE *fp;
	int ch;
	
	//fp=fopen("abc.txt","r+");
	fp=fopen("abc.bin","r");
	
	if(fp == NULL) {
		
		printf("\nError opening file ");
		exit(0);
	} else {
		
		while((ch=getc(fp))!=EOF) {
			
			printf("%c",ch);
		}
		
		fclose(fp);
	}
}
