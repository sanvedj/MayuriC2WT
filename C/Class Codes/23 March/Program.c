// Size of pointer (8 byte)

#include<stdio.h>
void main() {

	int a=10;
	char ch='m';
	float f=10.5;
	double d=40.5;
	long l=50;
	
	int *iptr=&a;
	char *cptr=&ch;
	float *fptr=&f;	
	double *dptr=&d;
	long *lptr=&l;
	printf("Integer           : %d\n",sizeof(dh));
	printf("Integer           : %d\n",sizeof(a));
	printf("Character         : %d\n",sizeof(ch));
	printf("Float             : %d\n",sizeof(f));
	printf("Double            : %d\n",sizeof(d));
	printf("Long              : %d\n",sizeof(l));
	printf("Integer pointer   : %d\n",sizeof(iptr));
	printf("Character pointer : %d\n",sizeof(cptr));
	printf("Float pointer     : %d\n",sizeof(fptr));
	printf("Double pointer    : %d\n",sizeof(dptr));
	printf("Long pointer      : %d\n",sizeof(lptr));
	
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ClassCodes/23March$ gcc Program.c
mayuri@snowflake:~/C2WT/ClassCodes/23March$ ./a.out
Integer           : 4
Character         : 1
Float             : 4
Double            : 8
Long              : 8
Integer pointer   : 8
Character pointer : 8
Float pointer     : 8
Double pointer    : 8
Long pointer      : 8


*/
