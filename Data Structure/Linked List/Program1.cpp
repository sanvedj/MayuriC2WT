/*

Program 1. Write a program which add new node in singly linear linked list at first position.

Function Prototype :

int InsertFirst( struct node **Head, int no );


Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input data element : 21
Output linked list : |21|->|10|->|20|->|30|->|40|->|50|->|60|->|70| 

*/

#include<iostream>

struct node {
	
	int num;
	struct node * next;
};

struct node* createNode() {
	
	struct node *pNode = (struct node*)malloc(sizeof(struct node));
	std::cout << "Enter a number : ";
	std::cin >> pNode->num ;
	pNode->next = NULL ; 

	return pNode;
}

struct node* createList(struct node* head) {
	
	struct node *pNode;
	pNode=createNode();
	
	struct node* temp = head;
	
	if(head == NULL) {
		head=pNode;
	}else {
		
		while(temp->next!=NULL) 
			temp=temp->next;
			
		temp->next=pNode;	
	}
	
	return head;
} 

void display(struct node * head) {

	while(head->next != NULL ) {
	
		std::cout << "|" << head->num << "|" << "->";
		head=head->next;
	}
	std::cout << "|" << head->num << "|";
		
}

int insertFirst(struct node **head){

	struct node *pNode=createNode();
	
	pNode->next=*head;
	*head=pNode;
	
	return 1;
}



int main() {

	int n,i,flag;
	struct node *head=NULL;
	
	std::cout << "\nEnter the number of nodes : ";
	std::cin >> n;
	
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	
	std::cout << "\n ----------   Linked List   ---------- \n\n";
	display(head); 
	
	std::cout << "\n\nInserting element at first\n";
	flag = insertFirst(&head);
	
	if(flag==1)
		std::cout << "\nInserted successfully !! :) \n";
	else
		std::cout << "\nElement not inserted successfully !! \n";		  
	
	
	std::cout << "\n\n ---------- Linked List after inserting at first position ---------- \n\n";
	display(head); 
	
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT ::

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program1.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 7
Enter a number : 10
Enter a number : 20
Enter a number : 30
Enter a number : 40
Enter a number : 50
Enter a number : 60
Enter a number : 70

 ----------   Linked List   ---------- 

|10|->|20|->|30|->|40|->|50|->|60|->|70|

Inserting element at first
Enter a number : 21

Inserted successfully !! :) 


 ---------- Linked List after inserting at first position ---------- 

|21|->|10|->|20|->|30|->|40|->|50|->|60|->|70|


*/

