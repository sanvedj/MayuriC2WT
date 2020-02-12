/*

Program 23. Write a program which accept source singly linear linked list and destination singly linear linked list and
check whether source list is sub list of destination list. Function returns first position at which sub list found.


Function Prototype :

int SubList(struct node **Src, struct node **Dest);

Input source linked list : |73|->|80|->|70|
Input dest list:|10|->|73|->|80|->|17|->|22|->|73|->|80|->|70|-|21|
Output : First Sub list found at position 6


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

	while(head->next!= NULL ) {
	
		std::cout << "|" << head->num << "|" << "->";
		head=head->next;
	}
	std::cout << "|" << head->num << "|";
		
}


int subList(struct node **src,struct node **dest) {

	struct node *temp=*dest;
	struct node *temp1=*src;
	int pos=0,flag=0;	
	while(temp!=NULL) {
		pos++;
		while(temp1!=NULL) {
			
			if(temp->num == temp1->num ) {
				temp=temp->next;
				temp1=temp1->next;
			}else
				break;
		}
			temp=temp->next;
	}
	
	return pos;
}

int main() {

	int n,n1,i,flag;
	struct node *head=NULL;
	struct node *head1=NULL;
	
	std::cout << "\nEnter the number of nodes for source LL : ";
	std::cin >> n;
	
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	
	std::cout << "\nEnter the number of nodes for destination LL : ";
	std::cin >> n1;
	
	for(i=0;i<n1;i++) {
		head1=createList(head1);
	}
	
	std::cout << "\n ---------- Source Linked List   ---------- \n\n";
	display(head); 
	
	std::cout << "\n\n ---------- Destination Linked List   ---------- \n\n";
	display(head1); 
	
	flag=subList(&head,&head1); 
	std::cout << "\n\nSublist found at position : "<< flag ;
	
	std::cout << std::endl << std::endl ;
	
	
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program23.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes for source LL : 3
Enter a number : 1
Enter a number : 2
Enter a number : 3

Enter the number of nodes for destination LL : 6
Enter a number : 8
Enter a number : 7
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 5

 ---------- Source Linked List   ---------- 

|1|->|2|->|3|

 ---------- Destination Linked List   ---------- 

|8|->|7|->|1|->|2|->|3|->|5|

Sublist found at position : 3


*/

