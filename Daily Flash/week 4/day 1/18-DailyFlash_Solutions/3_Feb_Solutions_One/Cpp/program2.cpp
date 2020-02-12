#include<iostream>

// prototype

int powerOf2(int,int);

int main(){

	int num,rem; 
	int position=1,power=1;
	printf("Enter four digit the binary number \n");
	scanf("%d",&num);
	int sum = 0;
	while(num!=0){
		
		rem = num%10;

		if(rem == 1){

			sum = sum + power; 
		}

		power = powerOf2(2,position);	
		position++;

		num = num/10;
		
	}	

	switch(sum){

		case 10:
			printf("A\n");
			break;
		case 11:
			printf("B\n");
			break;
		case 12:
			printf("C\n");
			break;
		case 13:
			printf("D\n");
			break;
		case 14:
			printf("E\n");
			break;
		case 15:
			printf("F\n");
			break;
		default:
			printf("%d\n",sum);	
	}	

		
	

}	


int powerOf2(int under , int upper){


	while(upper !=1){
		
		under = 2*under;
		upper--;
	}	

	return under;

}	
