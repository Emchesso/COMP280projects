// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/12/2022

#include "List.h"
#include <iostream>
using namespace std;
void isEmpty() {
    cout << "The linked list is empty." << endl;
}

void choice(int option, List& arrList) {
    // method for choosing between switch case menu options
    switch (option) {
    case 1: {
        int x;
        cout << "Enter an integer to insert at the end of the linked list: ";
        cin >> x;
        arrList.InsertAtEnd(x);
        break;
    }
    case 2: {
        if (!arrList.Empty()) {
            int x;
            cout << "Enter an integer you would like to delete from the linked list: ";
            cin >> x;
            arrList.Delete(x);
        }
        else {
            isEmpty();
        }
        break;
    }
    case 3: {
        if (!arrList.Empty()) {
            cout << "Elements in the linked list: ";
            arrList.Display();
        }
        else {
            isEmpty();
        }
        break;
    }
    case 4: {
        if (!arrList.Empty()) {
            cout << "The largest element in the linked list: " << arrList.findlargest() << endl;
        }
        else {
            isEmpty();
        }
        break;
    }
    case 5: {
        if (!arrList.Empty()) {
            cout << "The smallest element in the linked list: " << arrList.Findsmallest() << endl;
        }
        else {
            isEmpty();
        }
        break;
    }
    case 6: {
        if (!arrList.Empty()) {
            cout << "The range between the smallest and largest elements of the linked list: " << arrList.Range() << endl;
        }
        else {
            isEmpty();
        }
        break;
    }
    case 7: {
        cout << "Exiting." << endl;
        break;
    }
    default:
        cout << "Invalid choice, please choose from the menu." << endl;
    }
}
int main() {
    // initialize the list
    List arrList;
    int option = 0;
    while (option != 7) {
        // Display the menu options
        cout << "Please choose from the menu below: " << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Largest" << endl;
        cout << "5. Smallest" << endl;
        cout << "6. Range" << endl;
        cout << "7. Exit" << endl;
        cin >> option;
        // send option to choice method
        choice(option, arrList);
        cout << endl;
    }
    return 0;
}