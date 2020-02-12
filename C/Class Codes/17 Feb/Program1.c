#include<stdio.h>

void main() {

	int a;
	float b;
	char c;
	
	printf("\nEnter decimal , float and character value : ");
	scanf("%d %f %c",&a,&b,&c);
	
							//format specifier
	printf("\nValue of a : %d",a);               	// %d - decimal
	printf("\nValue of b : %f",b);			// %f - float
	printf("\nValue of c : %c",c);			// %c - character
}

/*
Output :

Enter decimal , float and character value : 5
2.3

m

Value of a : 5
Value of b : 2.300000
Value of c : m

*/
