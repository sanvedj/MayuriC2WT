/*

Program 10.Write a program which search second last occurrence of particular element from singly linear linked list.
 Function should return position at which element is found.

Function Prototype : int SearchSecLastOcc(struct node *Head , int no );


Input linked list : |10|->|20|->|30|->|40|->|30|->|30|->|70|
Input element : 30
Output : 5

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

int search(struct node *head,int no) {		//second last occurance

	struct node *temp=head;
	int pos=0,c1=0,c2=0;
	
	while(temp!=NULL) {
	
		if(temp->num == no) 
			c1++;
			
		temp=temp->next;	
	}
	temp=NULL;
	temp=head;
	
	c1--;
	while(temp!=NULL) {
	
		pos++;	
		if(temp->num==no) 
			c1--;
		
		if(c1==0)
			return pos;
				
		temp=temp->next;
			
	}
	
	return pos;
	
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
	std::cout<<"\n\nElement found at position :  " << pos ;
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program10.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 7
Enter a number : 1
Enter a number : 2
Enter a number : 3
Enter a number : 2
Enter a number : 1
Enter a number : 2
Enter a number : 5

 ----------   Linked List   ---------- 

|1|->|2|->|3|->|2|->|1|->|2|->|5|

Enter the number to be searched : 2


Element found at position :  4



*/

