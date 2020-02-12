//Nested For Loop 

#include<stdio.h>

void main () { 

	int i,j;
	
	printf("\nPatter 1 : \n\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf(" *");
		}
		printf("\n");
	}
	
	printf("\nPatter 2 : \n\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf(" 7");
		}
		printf("\n");
	}
	
	printf("\nPatter 3 : \n\n");
	int val=1;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf(" %d",val++);
		}
		printf("\n");
	}
	
	
	printf("\nPatter 4 : \n\n");
	val=65;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf(" %c",val++);
		}
		printf("\n");
	}
	
	printf("\nPatter 5 : \n\n");
	val=97;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf(" %c",val);
			val=val+2;
		}
		printf("\n");
	}
	
	printf("\nPatter 6 : \n\n");
	for(i=0;i<3;i++) {
		for(j=0;j<=i;j++) {
				printf(" *");
		}
		printf("\n");
	}
	
	printf("\nPatter 7 : \n\n");
	val=97;
	for(i=0;i<3;i++) {
		for(j=0;j<=i;j++) {
				printf(" %c",val++);
		}
		printf("\n");
	}
	
	printf("\nPatter 8 : \n\n");
	val=1;
	for(i=0;i<3;i++) {
		for(j=0;j<=i;j++) {
				printf("  %d",val*val);
				val++;
		}
		printf("\n");
	}
	
	
	printf("\nPatter 9 : \n\n");
	for(i=0;i<3;i++) {
		for(j=3;j>i;j--) {
				printf(" *");
		}
		printf("\n");
	}
	
	
	printf("\nPatter 10 : \n\n");
	val=1;
	for(i=0;i<3;i++) {
		for(j=3;j>i;j--) {
				printf(" %d",val++);
		}
		printf("\n");
	}
	
	int k;
	printf("\nPatter 11 : \n\n");
	for(i=0;i<=3;i++) {
		for(j=i;j<3;j++) {
				
			printf("  =");
		}
		for(k=0;k<i;k++)
				printf("  *");
		
		printf("\n");
	}
	
	printf("\nPatter 12 : \n\n");
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			
			if( i%3==0 && j%3==0)	
				printf("  =");
			else
				printf("  *");		
		}	
		
		printf("\n");
	}
	
	
	printf("\nPatter 13 : \n\n");
	for(i=0;i<5;i++) {
		
		for(j=3;j>i;j--) {
			
			printf("  *");
		
		}
		if(i>2)
		{
			for(j=1;j<i;j++) 
				printf("  *");
		}	
	
		printf("\n");
	}
	
	
}

/*

OUTPUT : 


mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ gcc Program11.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 March$ ./a.out

Patter 1 : 

 * * *
 * * *
 * * *

Patter 2 : 

 7 7 7
 7 7 7
 7 7 7

Patter 3 : 

 1 2 3
 4 5 6
 7 8 9

Patter 4 : 

 A B C
 D E F
 G H I

Patter 5 : 

 a c e
 g i k
 m o q

Patter 6 : 

 *
 * *
 * * *

Patter 7 : 

 a
 b c
 d e f

Patter 8 : 

  1
  4  9
  16  25  36

Patter 9 : 

 * * *
 * *
 *

Patter 10 : 

 1 2 3
 4 5
 6

Patter 11 : 

  =  =  =
  =  =  *
  =  *  *
  *  *  *

Patter 12 : 

  =  *  *  =
  *  *  *  *
  *  *  *  *
  =  *  *  =

Patter 13 : 

  *  *  *
  *  *
  *
  *  *
  *  *  *




*/
