/*
Program 12.Write a program which accept two singly linear linked listfrom user and concat source linked list after destination linked list.
Function Prototype :

int ConcatList(struct node **Src , struct node **Dest);


Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|>|70| 

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

void concat(struct node **src,struct node **dest) {

	struct node *temp=*dest;
	
	while(temp->next!=NULL)
		temp=temp->next;
	
	temp->next=*src;
	
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
		
		
	
	std::cout << "\n\n Enter the number of nodes for destination LL : ";
	std::cin >> n1;
	
	for(i=0;i<n1;i++) {
		head1=createList(head1);
	}
	
	std::cout << "\n ---------- Destination Linked List   ---------- \n\n";
	display(head1); 
		
	std::cout << "\n\n\n ---------- After concatination ---------- \n\n";
	concat(&head,&head1); 

	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program12.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes for source LL : 4
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 4

 ---------- Source Linked List   ---------- 

|1|->|2|->|3|->|4|

 Enter the number of nodes for destination LL : 2
Enter a number : 10
Enter a number : 20

 ---------- Destination Linked List   ---------- 

|10|->|20|


 ---------- After concatination ---------- 

|10|->|20|->|1|->|2|->|3|->|4|




*/

