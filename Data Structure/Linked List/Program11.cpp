/*

Program 11. Write a program which searches all occurrence of articular element from singly linear linked list. Function should return
number of occurance of that element.


Function Prototype :
int SearchAll(struct node *Head , int no);


Input linked list : |10|->|20|->|30|->|40|->|30|->|30|->|70|
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

int search(struct node *head,int no) {		//all occurance

	struct node *temp=head;
	int c1=0;
	
	while(temp!=NULL) {
	
		if(temp->num == no) 
			c1++;
			
		temp=temp->next;	
	}

	return c1;
	
}



int main() {

	int n,i,num,pos;
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
	std::cout<<"\nTotal occurance of element are :  " << pos ;
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program11.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 6
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 2
Enter a number : 4
Enter a number : 2

 ----------   Linked List   ---------- 

|1|->|2|->|3|->|2|->|4|->|2|

Enter the number to be searched : 2

Total occurance of element are :  3



*/

