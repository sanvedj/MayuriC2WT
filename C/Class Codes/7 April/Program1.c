//Multidimensional array

#include<stdio.h>

void main() {

	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	
	printf("\n%4d  %4d  %4d  %4d ",arr[0][0],arr[0][1],arr[0][2],arr[0][3]);
	printf("\n%4d  %4d  %4d  %4d ",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);
	printf("\n%4d  %4d  %4d  %4d",arr[2][0],arr[2][1],arr[2][2],arr[2][3]);
	printf("\n%4d  %4d  %4d  %4d\n\n",arr[3][0],arr[3][1],arr[3][2],arr[3][3]);
	
	for(int i=0;i<4;i++) {
		
		for(int j=0;j<4;j++) {
			printf(" %4d",arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\n%4d  %4d  %4d  %4d ",0[arr][0],0[arr][1],0[arr][2],0[arr][3]);		//arr[0][0] = 0[arr][0]
	printf("\n%4d  %4d  %4d  %4d ",1[arr][0],1[arr][1],1[arr][2],1[arr][3]);
	printf("\n%4d  %4d  %4d  %4d",2[arr][0],2[arr][1],2[arr][2],2[arr][3]);
	printf("\n%4d  %4d  %4d  %4d\n\n",3[arr][0],3[arr][1],3[arr][2],3[arr][3]);
	
}	

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ gcc Program1.c
mayuri@mayuri-PC:~/C2WT/Class Codes/7 April$ ./a.out

   1     2     3     4 
   5     6     7     8 
   9    10    11    12
  13    14    15    16

    1    2    3    4
    5    6    7    8
    9   10   11   12
   13   14   15   16


   1     2     3     4 
   5     6     7     8 
   9    10    11    12
  13    14    15    16


*/
