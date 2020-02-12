// DeReferencing

#include<stdio.h>
void main() {

	int a=20;
	char ch='m';
	float f=10.5;
	double d=40.5;
	long l=50;
	
	int *iptr=&a;                                   //Assignment or Initialization
	char *cptr=&ch;
	float *fptr=&f;	
	double *dptr=&d;
	long *lptr=&l;
	
	
	printf("Integer   : %d\n",a);
	printf("Character : %c\n",ch);
	printf("Float     : %f\n",f);
	printf("Double    : %f\n",d);
	printf("Long      : %ld\n\n",l);
	
	
	printf("Integer pointer holds   : %p\n",iptr);
	printf("Character pointer holds : %p\n",cptr);
	printf("Float pointer holds     : %p\n",fptr);
	printf("Double pointer holds    : %p\n",dptr);
	printf("Long pointer holds      : %p\n\n",lptr);
	
	
	printf("Integer pointer   : %d\n",*iptr);       //dereferencing
	printf("Character pointer : %c\n",*cptr);
	printf("Float pointer     : %f\n",*fptr);
	printf("Double pointer    : %f\n",*dptr);
	printf("Long pointer      : %ld\n",*lptr);
	
}

/*
OUTPUT :

mayuri@snowflake:~/C2WT/ClassCodes/23March$ gcc Program1.c
mayuri@snowflake:~/C2WT/ClassCodes/23March$ ./a.out

Integer   : 20
Character : m
Float     : 10.500000
Double    : 40.500000
Long      : 50

Integer pointer holds   : 0x7ffc8c673244
Character pointer holds : 0x7ffc8c673243
Float pointer holds     : 0x7ffc8c67323c
Double pointer holds    : 0x7ffc8c673230
Long pointer holds      : 0x7ffc8c673228

Integer pointer   : 20
Character pointer : m
Float pointer     : 10.500000
Double pointer    : 40.500000
Long pointer      : 50


*/
