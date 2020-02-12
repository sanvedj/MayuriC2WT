/*

Program 3. Write a program which add new node in singly linear linked list at specified position.

Function Prototype :
int InsertAtPosition(struct node **Head, int no, int pos);

Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input data element : 21
Input position : 4
Output linked list : |10|->|20|->|30|->|21|->|40|->|50|-->|60|>|70| 

*/

#include<iostream>

struct node {						//structure 			
	
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

int insertAtPosition(struct node **head, int no, int pos){			//function for inserting element at given position

	std::cout << "\nEnter a number :";
	std::cin>> no ;
	
	struct node *pNode=createNode(no);
	struct node *temp=*head;
	pos--;	
	
	while(pos) {
		
		temp=temp->next;
		pos--;
	}
	
	pNode->next=temp->next;
	temp->next=pNode;
	
	
	return no;	 			//return element to display	
}



int main() {

	int n,i,flag,pos;
	struct node *head=NULL;
	
	std::cout << "\nEnter the number of nodes : ";
	std::cin >> n;
	
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	
	std::cout << "\n ---------- Linked List ---------- \n\n";
	display(head); 
	
	
L1 :	std::cout<<"\n\nEnter the position : ";
	std::cin>>pos;  
	if(pos>n+1 || pos<= 1) {
		std::cout<< "\nPosition should be between 2 and " << n+1 <<std::endl;
		goto L1;
	}
	
	flag = insertAtPosition(&head,0,pos-1);
	
	std::cout << "\n\nLinked List after inserting element " << flag << " at position " << pos << "\n\n";
	display(head); 
	
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT ::


(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program3.cpp 
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 6
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 4
Enter a number : 5
Enter a number : 6

 ---------- Linked List ---------- 

|1|->|2|->|3|->|4|->|5|->|6|

Enter the position : 9

Position should be between 2 and 7


Enter the position : 4

Enter a number :99


Linked List after inserting element 99 at position 4

|1|->|2|->|3|->|99|->|4|->|5|->|6|



*/

