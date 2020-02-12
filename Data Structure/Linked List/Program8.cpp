/*

Program 8. Write a program which search first occurrence of particular element from singly linear linked list.
Function should return position at which element is found.

Function Prototype :

int SearchFirstOcc(struct node *Head, int no);

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3

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

int search(struct node *head,int no) {

	struct node *temp=head;
	int flag=0,pos=0;
	
	while(temp!=NULL) {
	
		pos++;

		if(temp->num == no) {
			flag=1;
			break;
		}	
		temp=temp->next;	
	}
	
	if(flag==1)
		std::cout<<"\nElement found at position ";
	else
		std::cout<<"\nElement not found  \n";	
	
	return pos;
}


int main() {

	int n,i,pos,num;
	struct node *head=NULL;
	
	std::cout << "\nEnter the number of nodes : ";
	std::cin >> n;
	
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	
	std::cout << "\n ----------   Linked List   ---------- \n\n";
	display(head); 
	
	std::cout<<"\n\nEnter the number to be searched : ";
	std::cin>>num;
	pos=search(head,num);	
	std::cout << pos ;
	
	std::cout << std::endl << std::endl ;
	return 0;
}


/*
OUTPUT ::

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program8.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 5
Enter a number : 10
Enter a number : 20
Enter a number : 30
Enter a number : 20
Enter a number : 40

 ----------   Linked List   ---------- 

|10|->|20|->|30|->|20|->|40|

Enter the number to be searched : 20

Element found at position 2



*/

