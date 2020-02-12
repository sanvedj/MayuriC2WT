#include<iostream>

// Note :  while taking input take value less than 10 becoz the value exceeds the integer capacity

long powerOf10(int,int);

int main(){
	
	int num ;
	printf("Enter the number\n");
	scanf("%d",&num);

	long sum = (powerOf10(10,num) - (9*num) - 10)/9;
	
	printf("%ld",sum);
}	


long powerOf10(int under,int upper ){

	while(upper!=0){
		under = 10*under;
		upper--;
	}	
	return under;
}	
