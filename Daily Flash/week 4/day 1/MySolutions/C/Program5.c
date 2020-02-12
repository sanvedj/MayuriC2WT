/*
Problem Statement :

Program 5: Write a Program to print sum of series up to the nth entered number.
Series is: 9, 99, 999, 9999, 9999 . . .. n.

Input: Nth Element in series: 5
Output: the sum of: 9 + 99 + 999 + 9999 + 99999 = 111105

*/

#include<stdio.h>

void main() {
	
	int n,num=9,ans=0;
	
	printf("\nEnter the nth element : ");
	scanf("%d",&n);
	
	printf("\nThe sum of : ");
	for(int i=0;i<n;i++) {
	
		ans=ans+num;
		printf("%d + ",num);
		num=num * 10 + 9;
	}
	
	printf(" = %d \n\n",ans);
		


}


/*
Output :



(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ cc Program5.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 1/MySolutions/C$ ./a.out

Enter the nth element : 5

The sum of : 9 + 99 + 999 + 9999 + 99999 +  = 111105 


*/
