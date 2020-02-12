/*

Program 6. Write a program which remove node from singly linear linked list which is at specified position.

Function Prototype :

int DeleteAtPosition( struct node **Head, int pos );


Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input position : 4
Output linked list : |10|->|20|->|30|->|50|->|60|->|70| 

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
int deleteAtPosition( struct node **head, int pos ){

	struct node *temp=*head;
	struct node *q=NULL;
	int no;
	
	if(pos==1) {
		no=(*head)->num;
		*head = temp->next;
		free(temp);
	}else {
		
		pos=pos-2;	
	
		while(pos) {
			
			temp=temp->next;
			pos--;
		}
		
		q=temp->next;
		no=q->num;
		
		temp->next=q->next;
		free(q);
		
		
	}
	
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
	if(pos>n) {
		std::cout<< "\nPosition should be less than " << n+1 <<std::endl;
		goto L1;
	}
	
	flag = deleteAtPosition(&head,pos);
	
	std::cout << "\n\nLinked List after deleting element " << flag << " at position " << pos << "\n\n";
	display(head); 
	
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT ::


(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program6.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 5
Enter a number : 10
Enter a number : 20
Enter a number : 30
Enter a number : 40
Enter a number : 50

 ---------- Linked List ---------- 

|10|->|20|->|30|->|40|->|50|

Enter the position : 4


Linked List after deleting element 40 at position 4

|10|->|20|->|30|->|50|



*/

