/*
Program 7. Write a program which displays contents of singly linear
linked list. 

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


int main() {

	int n,i;
	struct node *head=NULL;
	
	std::cout << "\nEnter the number of nodes : ";
	std::cin >> n;
	
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	
	std::cout << "\n ----------   Linked List   ---------- \n\n";
	display(head); 
		
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program7.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 5
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 4
Enter a number : 5

 ----------   Linked List   ---------- 

|1|->|2|->|3|->|4|->|5|


*/

