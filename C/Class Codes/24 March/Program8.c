//Addition of pointer

#include<stdio.h>
void main() {
	
	int val=10;
	int *iptr1=&val;
	
	char ch='B';
	int *iptr2=&ch;
	
	iptr1=iptr1+1;
	printf("\n%d",*iptr1);		//gv
	
	iptr2=iptr2+ch;
	printf("\n%d",*iptr2);		//gv	
	
}

/*

Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

394835275
-2000635904


*/
