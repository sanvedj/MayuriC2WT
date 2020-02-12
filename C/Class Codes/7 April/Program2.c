
#include<stdio.h>

void main() {

	int arr[3][3]={{1,2},3,4,5,{6}};
	
	
	for(int i=0;i<3;i++) {
		
		for(int j=0;j<3;j++) {
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ gcc Program2.c
mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ ./a.out
 1 2 0
 3 4 5
 6 0 0


*/
