#include<stdio.h>

void main() {

	int n1,n2;
	
	printf("\nEnter the range : ");
	scanf("%d %d",&n1,&n2);
	
	
	printf("\nSeries of odd numbers between %d and %d : \n",n1,n2);
	for(int i=n1+1;i<n2;i++) {
	
		if( i%2!=0 )
			printf("%d  ",i);
	}
	printf("\n");
}

/*
Output : 

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ cc Program1.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ ./a.out

Enter the range : 4 20

Series of odd numbers between 4 and 20 : 
5  7  9  11  13  15  17  19 

*/
