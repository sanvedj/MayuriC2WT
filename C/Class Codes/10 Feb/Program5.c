#include<stdio.h>

void add() {

	printf("%d",10+20);
}

/* 
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ gcc Program4.c Program5.c
/tmp/ccuhrrfm.o: In function `add':
Program5.c:(.text+0x0): multiple definition of `add'
/tmp/cctp3Mbj.o:Program4.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ ./a.out

*/
