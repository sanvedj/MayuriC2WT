#include<stdio.h>


void convert(int num) {

	int rev=0;
	int t,k=0;
	char ans[100];
	
	while(num) {
	
		t=num%10;
		num=num/10;
		rev= t + rev *10 ; 	
		ans[k++]=t;
		
	}
	int i=0;	

	printf("\nBinary Number is : ");	
	for(i=k;i>=0;i--) 
	{
		switch(ans[i]) {
		
			case 0 :
				printf("000");
				break;
			case 1 :
				printf("001");
				break;
			case 2 :
				printf("010");
				break;
			case 3 :
				printf("011");
				break;
			case 4 :
				printf("100");
				break;
			case 5 :
				printf("101");
				break;
			case 6 :
				printf("110");
				break;
			case 7 :
				printf("111");
				break;	
			default :
				printf("\nInvalid number ");
				break;
			
		}
		
	}	
	
	

}

void main() {
	
	int num;
	printf("\nOctal to binary : \n");
	
	printf("\nEnter a octal number : ");
	scanf("%d",&num);
	
	convert(num);
}


/*
Output :


*/
