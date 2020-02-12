//Error - Redefination of funtcion

#include<stdio.h>

void add() {

	printf("Hi");
}

void main() {

	add();
}

void add() {

	printf("%d",5+5);
}

/*
Output :

mayuri@mayuri-PC:~/C2WT/Class Codes/10 Feb$ gcc Program3.c
Program3.c:13:6: error: redefinition of ‘add’
 void add() {
      ^~~
Program3.c:3:6: note: previous definition of ‘add’ was here
 void add() {
      ^~~

*/
