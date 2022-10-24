// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/2/2022

#include "List.h"
#include <iostream>
using namespace std;
void isEmpty() {
    cout << "The array is empty." << endl;
}

void choice(int option, List& arrList) {
    // method for choosing between switch case menu options
    switch (option) {
    case 1: {
        int x;
        cout << "Enter an integer to insert into the array: ";
        cin >> x;
        arrList.InsertAtEnd(x);
        break;
    }
    case 2: {
        if (!arrList.Empty()) {
            int x;
            cout << "Enter an integer you would like to delete from the array: ";
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
            cout << "Elements in the array: ";
            arrList.Display();
        }
        else {
            isEmpty();
        }
        break;
    }
    case 4: {
        if (!arrList.Empty()) {
            cout << "The largest element in the array: " << arrList.findlargest() << endl;
        }
        else {
            isEmpty();
        }
        break;
    }
    case 5: {
        if (!arrList.Empty()) {
            cout << "The smallest element in the array: " << arrList.Findsmallest() << endl;
        }
        else {
            isEmpty();
        }
        break;
    }
    case 6: {
        if (!arrList.Empty()) {
            cout << "The range between the smallest and largest elements of the array: " << arrList.Range() << endl;
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