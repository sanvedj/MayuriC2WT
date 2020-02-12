#include<stdio.h>

void main() {

	int num[10],n,k=0,flag=0;
	
	printf("\nEnter 10 numbers : ");
	for(int i=0;i<10;i++) {
		
		scanf("%d",&n);
		if(n<0) {
			flag=1;
			break;
		}	
		num[k]=n;
		k++;	
	}
	
	if(flag==1)
		printf("\nYou entered negative number!! \n");
	for(int i=0;i<k;i++) {
		printf("%d ",num[i]);
	}
	
	printf("\n\n");
	
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ cc Program3.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ ./a.out

Enter 10 numbers : 6
7
3
8
2
-14

You entered negative number!! 
6 7 3 8 2 



*/
