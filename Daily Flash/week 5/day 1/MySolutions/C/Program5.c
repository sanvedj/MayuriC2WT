#include<stdio.h>

void main() {
	
	int num,count=0;
	printf("\nDigit Count : \n");
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	printf("\nThe number %d has ",num);
	while(num) {
	
		num=num/10;
		count++;
	}
	
	printf("%d digits\n\n",count);
	
	

	
}


/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 5/day 1/MySolutions/C$ cc Program5.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 5/day 1/MySolutions/C$ ./a.out

Digit Count : 

Enter a number : 12345

The number 12345 has 5 digits




*/
