// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/2/2022

#include "List.h"
#include<iostream>
using namespace std;
List::List() {
    // size of list initially set to 0

    N = 0;
}
bool List::Empty() {
    // if the size of list is 0, return true
    return N == 0;
}
void List::InsertAtEnd(ElementType x) {
    if (N < MAX) { // check to ensure current size of list is less than 100
        listArray[N] = x;   // insert at the last position in list
        N++;    // increment the current size of the list
    }
    else {
        // print error message
        cout << "Could not insert, MAX list size reached." << endl;
    }
}
void List::Delete(ElementType x) {
    for (int i = 0; i < N; i++) { // loop through the array
        if (listArray[i] == x) { // look for match to "x"
            for (int j = i; j < N - 1; j++) { // traverse rest of list to move the elements down by 1
                listArray[j] = listArray[j + 1]; // shift the elements down by 1
            }
            N--; // decrement the size of the array
            return; // break after finding and removing the matching element
        }
    }
    cout << "Element not found in the array." << endl;
}
void List::Display() {
    for (int i = 0; i < N; i++) { // for each element in array
        cout << listArray[i] << " ";     // print the element
    }
}
int List::findlargest() {
    int largest = listArray[0]; // set initial value to the first element of array
    for (int i = 0; i < N; i++) { // for each element in array
        if (listArray[i] > largest) { // check if that element is larger than largest
            largest = listArray[i]; // if it is, set largest equal to that element
        }
    }
    return largest; // return the largest value
}
int List::Findsmallest() {
    int smallest = listArray[0]; // set initial value to the first element of array
    for (int i = 0; i < N; i++) { // for each element in array
        if (listArray[i] < smallest) { // check if that element is smaller than smallest
            smallest = listArray[i]; // if it is, set smallest equal to that element
        }
    }
    return smallest; // return the smallest value
}
int List::Range() {
    return findlargest() - Findsmallest(); // return the difference between the largest and smallest element in the array
}
