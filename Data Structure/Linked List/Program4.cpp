/*
Program 4. Write a program which remove first node from singly linear linked list.

Function Prototype :
int DeleteFirst(struct node **Head);

Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Output linked list : |20|->|30|->|40|->|50|->|60|->|70| 

*/



#include<iostream>

struct node {						//structure defination				
	
	int num;
	struct node * next;
};

struct node* createNode(int n) {				//function for creating a single node		
	
	struct node *pNode = (struct node*)malloc(sizeof(struct node));
	pNode->num = n;
	pNode->next = NULL ; 

	return pNode;
}

struct node* createList(struct node* head) {		//function for creating SLL 
	
	struct node *pNode;
	int n;
	
	std::cout << "Enter a number : ";
	std::cin >>n;
	pNode=createNode(n);
	
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

void display(struct node * head) {			// function for displaying the SLL	

	while(head->next != NULL ) {
	
		std::cout << "|" << head->num << "|" << "->";
		head=head->next;
	}
	std::cout << "|" << head->num << "|";
		
}

int deleteFirst(struct node **head){			//function for deleting first element

	struct node *temp=*head;
	
	
	int n= (*head)->num;
	
	*head = temp->next;
	free(temp);

	
	return n;	//return element to display	
}



int main() {

	int n,i,flag;
	struct node *head=NULL;
	
	std::cout << "\nEnter the number of nodes : ";
	std::cin >> n;
	
	for(i=0;i<n;i++) {
		head=createList(head);
	}
	
	std::cout << "\n ---------- Linked List ---------- \n\n";
	display(head); 
	
	flag=deleteFirst(&head);
	
	std::cout << "\n\nLinked List after deleting first element  :: " << flag << "\n\n";
	display(head); 
	
	
	std::cout << std::endl << std::endl ;
	return 0;
}

/*
OUTPUT ::

(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ g++ Program4.cpp
(base) mayuri@mayuri-PC:~/C2WT/Data Structure/Linked List$ ./a.out

Enter the number of nodes : 4
Enter a number : 22
Enter a number : 33
Enter a number : 44
Enter a number : 55

 ---------- Linked List ---------- 

|22|->|33|->|44|->|55|

Linked List after deleting first element  :: 22

|33|->|44|->|55|



*/

