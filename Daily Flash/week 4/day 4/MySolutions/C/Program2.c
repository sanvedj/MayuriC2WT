#include<stdio.h>

void binary(int num) {

	int ans[100],i=0;
	
	while(num>0) {
		
		ans[i]=num%2;
		num=num/2;
		i++;
	}
	
	printf("\nBinary Number : ");
	for(int j=i-1;j>=0;j--)
		printf("%d",ans[j]);
	
}

void main() {

	printf("\nDecimal to Binary \n ");
	int num;
	
	printf("\nEnter a decimal number : ");
	scanf("%d",&num);
	
	binary(num);
	
	printf("\n\n");
	
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ cc Program2.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ ./a.out

Decimal to Binary 
 
Enter a decimal number : 10

Binary Number : 1010

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ ./a.out

Decimal to Binary 
 
Enter a decimal number : 7

Binary Number : 111



*/
