#include<stdio.h>

void main() {

	printf("\n   --------  Pattern -------   \n\n");
	int num=3;
	
	for(int i=0;i<4;i++) {
	
		for(int j=4;j>i;j--) 
			printf("   ");
		
		for(int k=0;k<=i;k++)
			printf("  %d",num);
			
		printf("\n");	
	}
	
	

}


/*
Output :

*/
