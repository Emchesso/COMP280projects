// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/12/2022

#include "List.h"
#include<iostream>
using namespace std;
List::List() {
    // set first to NULL, creates an empty linked list
    first = NULL;
}
bool List::Empty() {
    // if the first node is null, then the list is empty
    return first == NULL;
}
void List::InsertAtEnd(ElementType x) {
    node* newptr = new node;
    newptr->data = x;
    newptr->next = NULL;
    // if the list is empty, sets x as the first node
    if (first == NULL) {
        first = newptr;
    }
    // else traverses to the last node in the list and makes x the next node in the list
    else {
        node* preptr = first;
        while (preptr->next != NULL) {
            preptr = preptr->next;
        }
        preptr->next = newptr;
    }
}
void List::Delete(ElementType x) {
    node* delptr = first;
    node* preptr = NULL;
    // if x is the first node in the list, deletes it and makes the second node the new first
    if (delptr != NULL && delptr->data == x) {
        first = first->next;
        delete delptr;
        cout << x << " was deleted from the list," << endl;
    }
    // else traverses the list, looking for x
    else {
        while (delptr != NULL && delptr->data != x) {
            preptr = delptr;
            delptr = delptr->next;
        }
        // if x is not found in the list, prints a message
        if (delptr == NULL) {
            cout << "The element was not found in the list," << endl;
            return;
        }
        // if x is found, makes the node before x point to the node after x, then dereferences x
        preptr->next = delptr->next;
        delete delptr;
        cout << x << " was deleted from the list," << endl;
    }
}
void List::Display() {
    node* ptr = first;
    // traverse the list, printing each node's data
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int List::findlargest() {
    node* ptr = first;
    int largest = ptr->data;
    // traverses list, replacing largest with any data that is larger than it
    while (ptr != NULL) {
        if (ptr->data > largest) {
            largest = ptr->data;
        }
        ptr = ptr->next;
    }
    return largest;
}
int List::Findsmallest() {
    node* ptr = first;
    int smallest = ptr->data;
    // traverses list, replacing smallest with any data that is smaller than it
    while (ptr != NULL) {
        if (ptr->data < smallest) {
            smallest = ptr->data;
        }
        ptr = ptr->next;
    }
    return smallest;
}
int List::Range() {
    return findlargest() - Findsmallest();
}
