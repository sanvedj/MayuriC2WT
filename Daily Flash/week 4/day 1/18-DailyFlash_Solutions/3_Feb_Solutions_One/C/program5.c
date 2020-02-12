#include<stdio.h>

// Note :  while taking input take value less than 10 becoz the value exceeds the integer capacity

void main(){
	
	int num ;
	printf("Enter the number\n");
	scanf("%d",&num);

	long sum = (powerOf10(10,num) - (9*num) - 10)/9;
	
	printf("%ld",sum);
}	


int powerOf10(int under,int upper ){

	while(upper!=0){
		under = 10*under;
		upper--;
	}	
	return under;
}	
