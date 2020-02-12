
#include<stdio.h>

void main() {

	int num;
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	printf("\n\tNumber\tSquare\tCube\n");
	for(int i=1;i<=num;i++) {
	
		if(i%2 == 0) {
		
			printf("\n\t%d\t%2d\t%3d",i,i*i,i*i*i);
		}
	}
	
	printf("\n");

}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ cc Program3.c
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 2/day 6/MySolutions/C$ ./a.out

Enter a number : 10

	Number	Square	Cube

	2	 4	  8
	4	16	 64
	6	36	216
	8	64	512
	10	100	1000


*/
