#include<stdio.h>

void main() {
	
	int a,b;
	char ch1,ch2,ch3;
	float f;
	
	printf("\nEnter two integers : ");
	scanf("%d %d",&a,&b);			
	
	printf("\nEnter a character : ");	// add space before %c or takes space/new line as a character	
	scanf(" %c",&ch1);
	
	printf("\nEnter a float value : ");
	scanf("%f",&f);
	
	printf("\nEnter two characters : ");
	scanf(" %c %c",&ch2,&ch3);
	
	printf("\nInteger     : %d %d ",a,b);
	printf("\nFloat       : %f ",f);
	printf("\nCharacter   : %c %c %c ",ch1,ch2,ch3);
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/17 Feb$ ./a.out

Enter two integers : 10
20

Enter a character : a

Enter a float value : 2.3

Enter two characters : b
c

Integer     : 10 20 
Float       : 2.300000 
Character   : a b c 

*/
