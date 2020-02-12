/*
Program 13. Write a program which accept two singly linear linked list from user and concat first N elements of source linked list after
destination linked list.

Function Prototype :
int ConcatFirstN(
struct node **Src ,struct node **Dest, int no
);


Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Input number of elements : 2
Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30| 
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

void concat(struct node **src,struct node **dest,int n) {

	struct node *temp=*dest;
	struct node *temp1=*src;
	
	
	while(temp->next!=NULL)
		temp=temp->next;
	
	while(n) {
 		temp->next=temp1;
 		temp=temp->next;
 		temp1=temp1->next;
		n--;
	}
	
	temp->next=NULL;
	display(*dest);	
}


int main() {

	int n,n1,i,num;
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
	
l1:	std::cout<<"\n\nEnter the number of elements to be concatinated : ";
	std::cin>>num;	
	if(num>n) {
		std::cout<<"\nNumber should be smaller than " << n ;
		goto l1;
	}
	
	std::cout << "\n\n ---------- After concatination ---------- \n\n";
	concat(&head,&head1,num); 

	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :


(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program13.cpp
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

Enter the number of elements to be concatinated : 4


 ---------- After concatination ---------- 

|11|->|22|->|1|->|2|->|3|->|4|



*/

