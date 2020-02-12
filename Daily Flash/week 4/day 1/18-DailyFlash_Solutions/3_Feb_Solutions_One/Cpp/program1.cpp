
#include<iostream>


int main(){

	
	int num;

	printf("Enter the number\n");
	scanf("%d",&num);

	int flag =0;
	for(int itr =2 ; itr<=num/2 ;itr++){
		
		if(num%itr == 0){
			flag = 1;
			break;
		}	

	}	

	if(flag==0){
		printf("The number is Prime");
	}
	else{
		printf("The number is Not Prime");
	}	
}	
