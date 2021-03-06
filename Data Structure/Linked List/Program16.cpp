/*

Program 16. Write a program which copies contents of source singly linear linked list to singly linear destination linked list.

Function Prototype :
int LLCopy( struct node **Src, struct node **Dest );


Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input destination linked list : Empty (NULL)
Output destination linked list : |30|->|30|->|70|->|80|->|90|->|100| 


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

void copy(struct node **src,struct node **dest) {

	struct node *temp=*src;
	struct node *temp1;
		
	while(temp!=NULL) {
	
		struct node *pNode=(struct node *)malloc(sizeof(struct node));
		pNode->num=temp->num;
		pNode->next=NULL;
		
		
		
		if(*dest==NULL) {
			*dest=pNode; 
			temp1=*dest;
		}else {
			
			while(temp1->next!=NULL) {
				temp1=temp1->next;
			}
			
			temp1->next=pNode;
		}
		temp=temp->next;
	}
	
	display(*dest);	
}


int main() {

	int n,n1,i;
	struct node *head=NULL;
	struct node *head1=NULL;
	
	std::cout << "\nEnter the number of nodes for source LL : ";
	std::cin >> n;
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	std::cout << "\n ---------- Source Linked List   ---------- \n\n";
	display(head); 
		
	
	std::cout << "\n\n\nAfter copying  \n\n";
	copy(&head,&head1); 
	
	std::cout <<"\n\nAddress of source LL : " << head << std::endl << "Address of destination LL :"<< head1<< std::endl ;

	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program16.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes for source LL : 4
Enter a number : 11
Enter a number : 22
Enter a number : 33
Enter a number : 44

 ---------- Source Linked List   ---------- 

|11|->|22|->|33|->|44|


After copying  

|11|->|22|->|33|->|44|

Address of source LL : 0x56518f7fa440
Address of destination LL :0x56518f7fa4c0

*/

