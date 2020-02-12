/*

Program 19. Write a program which copies contents of source singly linear linked list to destination singly linear linked list which lies
between the particular range which is accepted from user.

Function Prototype :
int LLCopyRange(struct node **Src, struct node **Dest, int start, int end);


Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input destination linked list : Empty (NULL)
Input starting range : 2
Input starting range : 5
Output destination linked list : |30|->|70|->|80|->|90|
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

void copy(struct node **src,struct node **dest,int start,int end) {

	struct node *temp=*src;
	struct node *temp1;
	
	while(start) {
		temp=temp->next;
		start--;
	}
	
	while(end && temp!=NULL) {
	
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
		end--;
	}
	
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
		
			
l1:	std::cout<<"\n\nEnter start and end : ";
	std::cin>>start >> end;	
	if(end > n || start <= 0 ) {
		std::cout<<"\nRe enter in proper range!";
		goto l1;
	}
	
	std::cout << "\n\n\nAfter copying elements \n\n";
	copy(&head,&head1,start-1,end-1); 
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :


(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program19.cpp
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

Enter start and end : 2
4



After copying elements 

|2|->|3|->|4|

*/

