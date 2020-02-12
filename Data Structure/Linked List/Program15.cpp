/*

Program 15. Write a program which accepts two singly linear linked list from user and also accept range and concat elements of source
singly linear linked list from that range after singly linear destination linked list.

Function Prototype :

int ConcatListRange(struct node **Src, struct node **Dest , int start , int end ); 


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

void concat(struct node **src,struct node **dest,int start,int end) {

	struct node *temp=*dest;
	struct node *temp1=*src;
	
	while(temp->next!=NULL)
		temp=temp->next;
	
	
	while(start) {
		temp1=temp1->next;
		start--;	
	}
	
	while(end>=0){
		
		temp->next=temp1;
		temp=temp->next;
		temp1=temp1->next;
		end--;
	}
	
	temp->next=NULL;
	display(*dest);	
}


int main() {

	int n,n1,i,start,end;
	struct node *head=NULL;
	struct node *head1=NULL;
	
	std::cout << "\nEnter the number of nodes for source LL : ";
	std::cin >> n;
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	std::cout << "\n ---------- Source Linked List   ---------- \n\n";
	display(head); 
		
		
	
	std::cout << "\n\n Enter the number of nodes for destination LL : ";
	std::cin >> n1;
	for(i=0;i<n1;i++) {
		head1=createList(head1);
	}
	std::cout << "\n ---------- Destination Linked List   ---------- \n\n";
	display(head1); 
	
l1:	std::cout<<"\n\nEnter start and end : ";
	std::cin>>start >> end;	
	if(end > n || start <= 0 ) {
		std::cout<<"\nRe enter in proper range!";
		goto l1;
	}
	
	std::cout << "\n ---------- After concatination ---------- \n\n";
	concat(&head,&head1,start-1,end-start); 

	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :


(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program15.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes for source LL : 6
Enter a number : 1 
Enter a number : 2
Enter a number : 3
Enter a number : 4
Enter a number : 5
Enter a number : 6

 ---------- Source Linked List   ---------- 

|1|->|2|->|3|->|4|->|5|->|6|

 Enter the number of nodes for destination LL : 2
Enter a number : 11
Enter a number : 22

 ---------- Destination Linked List   ---------- 

|11|->|22|

Enter start and end : 2
5

 ---------- After concatination ---------- 

|11|->|22|->|2|->|3|->|4|->|5|


*/

