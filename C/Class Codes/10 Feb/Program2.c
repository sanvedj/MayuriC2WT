
int printf(const char *,...);       //prototype for printf

void add();			//forward declaration	 

void main() {
	
		int a=10;
		int c;
		printf("\nValue of a : %d",a);
		printf("\nValue of c : %d",c);
		add();	
}

void add() {

	printf("\n %d",5+5);
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ gcc Program2.c
mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ ./a.out

Value of a : 10
Value of c : 0
 10

*/
