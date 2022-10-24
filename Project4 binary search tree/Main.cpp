// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/22/2022

#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

int main() {
	int dish = 0;
	BinarySearchTree tree;
	// prints menu of options for user
	while (dish != 9)	{
		cout << "\nWelcome to the CS Diner, please choose from the menu below: " << endl;
		cout << "Dish 1 - Fried Chicken" << endl;
		cout << "Dish 2 - Pork Chops" << endl;
		cout << "Dish 3 - Baked Chicken" << endl;
		cout << "Dish 4 - Grilled Salmon" << endl;
		cout << "Dish 5 - Roast Beef" << endl;
		cout << "Dish 6 - Grilled Steak" << endl;
		cout << "Dish 7 - Meat Loaf" << endl;
		cout << "Press 8 to display order" << endl;
		cout << "Press 9 to exit \n" << endl;
		cin >> dish;
		if (dish >= 1 && dish <= 7) {
			// switch used to print proper message
			cout << "\nAdding ";
			switch (dish) {
			case 1: {
				cout << "Fried Chicken ";
				break;
			}
			case 2: {
				cout << "Pork Chops ";
				break;
			}
			case 3: {
				cout << "Baked Chicken ";
				break;
			}
			case 4: {
				cout << "Grilled Salmon ";
				break;
			}
			case 5: {
				cout << "Roast Beef ";
				break;
			}
			case 6: {
				cout << "Grilled Steak ";
				break;
			}
			case 7: {
				cout << "Meat Loaf ";
				break;
			}
			}
			cout << "to your order, \n" << endl;
			tree.Insert(dish);
		}
		else if (dish == 8) {
			tree.Display();
			cout << "" << endl;
		}
		else if (dish == 9) {
			cout << "Thank you for dining with us, good bye." << endl;
			return 0;
		}
		else {
			cout << "Invalid entry, please select from the menu, \n" << endl;
		}
	}
}