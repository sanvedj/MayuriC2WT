
#include<stdio.h>

void main() {

	int num1,num2;
	printf("\nEnter two numbers : ");
	scanf("%d %d",&num1,&num2);
	
	
	if(num1 > num2)
		printf("\nMaximum number is %d\n",num1);
	else
		printf("\nMaximum number is %d\n",num2);	 
	
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ cc Program5.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ ./a.out

Enter two numbers : 25 52

Maximum number is 52


*/
