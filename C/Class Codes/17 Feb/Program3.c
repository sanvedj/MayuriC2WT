#include<stdio.h>

void main() {

	int a=10;
	float b=20.5f;
	int c;
	float d;
	
	printf("\nEnter value for a : ");
	scanf("%d",&a);
	
	printf("\nEnter float value for b : ");
	scanf("%f",&b);
	
	c=a+b;
	d=a+b;
	
	printf("\nValue of c : %d",c);
	printf("\nValue of d : %d",d);
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/17 Feb$ gcc Program3.c
mayuri@mayuri-PC:~/C2WT/Class Codes/17 Feb$ ./a.out

Enter value for a : 10

Enter float value for b : 12.2        

Value of c : 22
Value of d : -1364322100
*/
