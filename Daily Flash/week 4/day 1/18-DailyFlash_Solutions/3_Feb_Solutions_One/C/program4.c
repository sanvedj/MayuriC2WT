#include<stdio.h>


void main(){
	
	char ch ='A';

	
	for(int itr = 0 ; itr < 4 ;itr ++){

		for(int jtr = 0 ; jtr<4-itr ; jtr++ ){
			
			printf("%c",ch+(jtr*2));
		}
		printf("\n");
		ch = ch + 1;	
	}	
}	
