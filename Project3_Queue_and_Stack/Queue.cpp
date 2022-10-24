#include "Queue.h"
#include <iostream>

using namespace std;

// create an empty Queue
Queue::Queue() {
	myfront = myback = NULL;
}

//return true if Queue is empty, otherwise return false
bool Queue::empty() {
	return (myfront == NULL);
}

//add a new value to the back of the Queue
void Queue::AddQ(QueueElement x) {
	// Create a new qnode
	qnode* temp = new qnode;
	temp->data = x;
	// If queue is empty, then
	// new node is front and rear both
	if (myback == NULL) {
		myfront = myback = temp;
		return;
	}
	// Add the new node at
	// the end of queue and change rear
	myback->next = temp;
	myback = temp;
}

//retrieve the data at the front of the Queue
bool Queue::Front(QueueElement& x) {
	if (!empty()) {
		x = myfront->data;
		return true;
	}
	else {
		return false;
	}
}

//remove the value at the front of the Queue
void Queue::RemoveQ() {
	// If queue is empty, return NULL.
	if (myfront == NULL)
		return;

	// Store previous front and
	// move front one node ahead
	qnode* temp = myfront;
	myfront = myfront->next;

	// If front becomes NULL, then
	// change rear also as NULL
	if (myfront == NULL)
		myback = NULL;

	temp->next == NULL;
	delete (temp);
}

//displays the data stored in the Queue from front to back
void Queue::display() {
	// if nothing to remove
	if (!empty()) {
		qnode* temp = myfront;
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