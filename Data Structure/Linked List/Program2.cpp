/*

Write a program which add new node in singly linear linked list at last position.

Function Prototype :
int InsertLast(
struct node **Head, int no 
);


Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input data element : 21
Output linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|->|21| 
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

int insertLast(struct node **head,int no){			//function for inserting element at last position

	std::cout << "\n\nInserting element at last\nEnter a number :";
	std::cin>> no ;
	
	struct node *pNode=createNode(no);
	struct node *temp=*head;
	
	while(temp->next!= NULL )  		//traverse till last element of SLL 								
		temp=temp->next;
		
	temp->next=pNode;			//add new element to the list
	
	return no;	 			//return element to display	
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
	
	flag = insertLast(&head,0);
	
	std::cout << "\n\nLinked List after inserting element " << flag << " at last \n\n";
	display(head); 
	
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT ::

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program2.cpp 
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 5
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 4
Enter a number : 5

 ---------- Linked List ---------- 

|1|->|2|->|3|->|4|->|5|

Inserting element at last
Enter a number :99


Linked List after inserting element 99 at last 

|1|->|2|->|3|->|4|->|5|->|99|


*/

