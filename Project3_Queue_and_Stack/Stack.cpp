#include "Stack.h"
#include <iostream>
using namespace std;

// create an empty stack
Stack::Stack() {
	mytop = NULL;
}

//return true if stack is empty, otherwise return false
bool Stack::empty() {
	return mytop == NULL;
}

//add a new value to the top of the stack
void Stack::push(StackElement x) {
	// Create a temp node and assifn the new element
	struct node* temp = new node();
	temp->data = x;
	// assign the current top link
	temp->next = mytop;
	// make temp as top of Stack
	mytop = temp;
}

//retrieves the data that is at the top of the stack
bool Stack::Top(StackElement& x) {
	// check for empty stack
	if (!empty()) {
		x = mytop->data;
		return true;
	}
	return false;
}

//removes the value at the top of the stack
void Stack::pop() {
	// if empty and nothing to remove
	if (!empty()) {
		// top assign into temp
		struct node* temp = mytop;
		// assign second node to top
		mytop = mytop->next;
		// destroy connection between first and second
		temp->next = NULL;
		// release memory of top node
		free(temp);
	}
}

//displays the data stored in the stack
void Stack::display() {
	// check for stack underflow
	if (!empty()) {
		struct node* temp = mytop;
		// Loop until it is null
		while (temp != NULL) {
			// print node data
			cout << temp->data << " ";
			// assign temp link to temp
			temp = temp->next;
		}
		cout << endl;
	}
}