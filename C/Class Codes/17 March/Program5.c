//Print addition of elements at odd index

#include<stdio.h>

void main() {

	int arr[100],i,s,ans;
	
	printf("\nEnter size of array");
	scanf("%d",&s);
	
	printf("\nEnter elements  : ");
	for(i=0;i<s;i++) {
		scanf("%d",&arr[i]);
	}	

	for(i=0;i<s;i++) {
		if(i%2!=0)
			ans=ans+arr[i];
	}
	
	printf("\nAdditon of ele at even odd index is : %d ",ans);

}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ gcc Program5.c
mayuri@mayuri-PC:~/C2WT/Class Codes/17 March$ ./a.out

Enter size of array6

Enter elements  : 1
2
3
4
5
6

Additon of ele at even odd index is : 12 

*/


