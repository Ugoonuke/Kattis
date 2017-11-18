/*
* Trik.cpp
* Created by: Ugo Onuke
* 18 Nov 2017
* 19:18:59
*/
#include <iostream>
#include <string>

using namespace std;

class List {
private:
	typedef struct node { // Create the private pointers
		int data;
		node* next;
	}* nP;
	nP head;
	nP curr;
	nP temp;

public:
	List(); // Functions visibleto the main
	void addNode(int addData);
	void deleteNode(int delData);
	void printList();
	int data();
};

List::List() { // Default constructor for list class. Set all pointers to NULL
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::addNode(int addData) {
	nP n = new node; // New node object
	n->next = NULL; // Next node is set toNULL
	n->data = addData; // Data stored for node
	if(head != NULL) { // If list is empty
		curr = head; // Current pointer points to the start of list
		while(curr->next != NULL) { // While we have not reach the end of the list
			curr = curr->next; //Current pointer points to next node
		}
		curr->next = n; // Then current pointer will point to next node
	}
	else {
		head = n; // Else head will move to next pointer
	}
}

void List::deleteNode(int delData) {
	nP delP = NULL; // New deleteNode object
	temp = head; // Store a trail copy. (Always one behind the current pointer)
	curr = head; // Set current node to head
	while(curr !=NULL && curr->data != delData) {
		// While the list is not empty and the current pointer data doesn't point to wanted data to be deleted
		temp = curr; // Temp points to current
		curr=curr->next; // Current moves on to the next node
	}
	if(curr == NULL) { // If we reach the end of the list and still haven't found the data
		cout<<delData<<" was not in the list"<<endl;
		delete delP; // Garbage collection
	}
	else {
		delP = curr; // Deletable pointer points to current node
		curr = curr->next; // Current points to next node
		temp->next = curr; // The next pointer of trailing temp will point to currents node (patch the gap/deleted node)
		if(delP == head) { // If head of list is to be deleted
			head = head->next; // The new head of list will be the next pointer
			temp = NULL; // Reset temp
		}
		delete delP; // Delete the wanted node
		cout<<"The value "<<delData<<" was deleted"<<endl;
	}
}

void List::printList() {
	curr = head; // Current points to the start of list
	while(curr != NULL) { // While we haven't reached the end of list
		cout<<curr->data<<endl; // Print out the current data of list
		curr = curr->next; // Current point to the next node
	}
}

int List::data() {
	curr = head; // Current points to the start of list
	return curr->data; // Return currents data
}


int main()
{
	List move;
	string mset;
	cin>>mset;
	move.addNode(1);
	for(int pos = 0 ;pos < mset.length(); pos++) {
		switch(mset.at(pos)) {
		case 'A':
			if(move.data() == 1) {
				move.addNode(2);
				move.deleteNode(1);
			}
			else if(move.data() == 2) {
				move.addNode(1);
				move.deleteNode(2);
			}
			break;
		case 'B':
			if(move.data() == 2) {
				move.addNode(3);
				move.deleteNode(2);
			}
			else if(move.data() == 3) {
				move.addNode(2);
				move.deleteNode(3);
			}
			break;
		case 'C':
			if(move.data() == 1) {
				move.addNode(3);
				move.deleteNode(1);
			}
			else if(move.data() == 3) {
				move.addNode(1);
				move.deleteNode(3);
			}
			break;
		}
	}
	cout<<move.data();
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
