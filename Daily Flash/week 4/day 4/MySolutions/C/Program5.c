#include<stdio.h>

void main() {

	int ans[100];
	int n;
	
	printf("\nEnter 5 numbers : ");
	for(int i=0;i<5;i++) {
		scanf("%d",&n);
		ans[i]=n;
	}
	
	printf("\nThe numbers are : ");
	for(int i=0;i<5;i++) {
		
		if(ans[i+1]>ans[i]) 
			printf("%d ",ans[i]);
		else {
			printf("%d  ",ans[i]);
			printf("\nThe loop is exited with input %d \n",ans[i+1]);
			break;
		}
		
	}
	
	printf("\n");
		
}

/*
Output :

(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ cc Program5.c 
(base) mayuri@mayuri-PC:~/C2WT/Daily Flash/week 4/day 4/MySolutions/C$ ./a.out

Enter 5 numbers : 1
3
5
4
6

The numbers are : 1 3 5  
The loop is exited with input 4 



*/
