/*

Program 21. Write a program which copies contents of source singly linear linked list whose addition of digits is even number to destination
singly linear linked list.

Function Prototype :

int LLCopyEx(struct node **Src , struct node **Dest);

Input source linked list : |30|->|33|->|73|->|80|->|90|->|100|->|110|
Input destination linked list : Empty (NULL)
Output destination linked list : |33|->|77|->|110|

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


void copy(struct node **src,struct node **dest) {

	struct node *temp=*src;
	int num,n,ans=0;
		
	while(temp!=NULL) {
		ans=0;
		num=temp->num;
		while(num) {
			n=num%10;
			num=num/10;
			
			ans=ans+n;
			
		}
				
		if(ans%2 == 0) {
 			struct node *pNode=(struct node *)malloc(sizeof(struct node));
			pNode->num=temp->num;
			pNode->next=NULL;
		
			if(*dest==NULL) {
				*dest=pNode; 
				
			}else {	
				struct node *temp1=*dest;
				while(temp1->next!=NULL) {
					temp1=temp1->next;
				}
				
				temp1->next=pNode;
			}
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
	
	std::cout << "\n\n\nAfter copying nodes whose addition is even :  \n\n";
	copy(&head,&head1); 
	std::cout << std::endl << std::endl ;
	
	return 0;
}

/*
OUTPUT :

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program21.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes for source LL : 6
Enter a number : 121
Enter a number : 34
Enter a number : 60
Enter a number : 82
Enter a number : 5
Enter a number : 31

 ---------- Source Linked List   ---------- 

|121|->|34|->|60|->|82|->|5|->|31|


After copying nodes whose addition is even :  

|121|->|60|->|82|->|31|


*/

