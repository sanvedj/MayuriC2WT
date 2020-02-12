//Null pointer

#include<stdio.h>

void main () {
	
	int *ptr=NULL;		//numeric value is 0
	
	printf("\n%d ",*ptr);		//segmentation fault

}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/31 March$ gcc Program1.c
mayuri@mayuri-PC:~/C2WT/Class Codes/31 March$ ./a.out
Segmentation fault

*/
