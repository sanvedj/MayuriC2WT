/*

Program 5. Write a program which remove last node from singly linear linked list.

Function Prototype :
int DeleteLast(struct node **Head);


Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Output linked list : |10|->|20|->|30|->|40|->|50|->|60| 

*/

#include<iostream>

struct node {						//structure defination				
	
	int num;
	struct node * next;
};

struct node* createNode(int n) {				//function for creating a single node		
	
	struct node *pNode = (struct node*)malloc(sizeof(struct node));
	pNode->num = n;
	pNode->next = NULL ; 

	return pNode;
}

struct node* createList(struct node* head) {		//function for creating SLL 
	
	struct node *pNode;
	int n;
	
	std::cout << "Enter a number : ";
	std::cin >>n;
	pNode=createNode(n);
	
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

void display(struct node * head) {			// function for displaying the SLL	

	while(head->next != NULL ) {
	
		std::cout << "|" << head->num << "|" << "->";
		head=head->next;
	}
	std::cout << "|" << head->num << "|";
		
}

int deleteLast(struct node **head){			

	struct node *temp=*head;
	
	while(temp->next->next!= NULL )			
		temp=temp->next;
		
	int n = temp->next->num;
	
	free(temp->next);
	temp->next=NULL;	
	return n;	 			//return element to display	
}



int main() {

	int n,i,flag;
	struct node *head=NULL;
	
	std::cout << "\nEnter the number of nodes : ";
	std::cin >> n;
	
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	
	std::cout << "\n ---------- Linked List ---------- \n\n";
	display(head); 
	
	flag = deleteLast(&head);
	
	std::cout << "\n\nLinked List after deleting last element : " << flag << "\n\n";
	display(head); 
	
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT ::

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program5.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 6
Enter a number : 11
Enter a number : 22
Enter a number : 33
Enter a number : 44
Enter a number : 55
Enter a number : 66

 ---------- Linked List ---------- 

|11|->|22|->|33|->|44|->|55|->|66|

Linked List after deleting last element : 66

|11|->|22|->|33|->|44|->|55|




*/

