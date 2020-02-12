#include<stdio.h>

void convert(int n) {

	int ans[100],i=0;
	while(n) {
		
		ans[i]=n%16;
		i++;
		n=n/16;
	}
	
	printf("\nHexadecimal number : ");
	for(int j=i-1;j>=0;j--){
	
		printf("%X",ans[j]);
	}
}

void main() {

	int num;
	
	printf("\nDecimal to hexadecimal : \n");
	
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	convert(num);
	printf("\n");

}


/*
Output :

*/
