//Arithmetic operation on pointer

#include<stdio.h>
void main() {
	
	int val=10;
	int *ptr=&val;
	
	printf("\nPost Increment pointer : %d",*ptr++);	
	printf("\nDereference pointer    : %d\n",*ptr); //garbage value

}

/*

Output :

mayuri@snowflake:~/C2WT/ClassCodes/24March$ gcc Program7.c
mayuri@snowflake:~/C2WT/ClassCodes/24March$ ./a.out

Post Increment pointer : 10
Dereference pointer    : 275756216



*/
