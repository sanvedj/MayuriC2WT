/*

Program 17. Write a program which copies first N contents of singly linear source linked list to destination singly linear linked list.

Function Prototype :
int LLNCopy(struct node **Src , struct node **Dest, int no);


Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input destination linked list : Empty (NULL)
Input no : 4
Output destination linked list : |30|->|30|->|70|->|80|

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

void copy(struct node **src,struct node **dest,int no) {

	struct node *temp=*src;
	struct node *temp1;
		
	while(no) {
	
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
		no--;
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
		
L1:	std::cout<<"\n\nEnter the number of nodes to be copied : ";
	std::cin >> n1;
	
	if(n1>n) {
		std::cout<<"\nNumber should be less than : " << n+1 ;
		goto L1;
	
	}
	
	std::cout << "\n\n\nAfter copying  \n\n";
	copy(&head,&head1,n1); 
	
	std::cout <<"\n\nAddress of source LL : " << head << std::endl << "Address of destination LL :"<< head1<< std::endl ;

	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program17.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes for source LL : 4
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 4

 ---------- Source Linked List   ---------- 

|1|->|2|->|3|->|4|

Enter the number of nodes to be copied : 5

Number should be less than : 5

Enter the number of nodes to be copied : 3



After copying  

|1|->|2|->|3|

Address of source LL : 0x5555a6c59440
Address of destination LL :0x5555a6c594c0

*/

