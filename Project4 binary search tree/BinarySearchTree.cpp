// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/22/2022

#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

void printFormat(int count) {
	// Used in the print function to print plural "orders" if counter is >1
	if (count == 1) {
		cout << count << " order" << endl;
	}
	else {
		cout << count << " orders" << endl;
	}
}

BinarySearchTree::BinarySearchTree() {
	root = NULL;
}

bool BinarySearchTree::empty() {
	// if root is null then the tree is empty
	return root == NULL;
}

bool BinarySearchTree::Insert(int dishNum) {
	//defines a new node and its children for the food item ordered
	node* newNode = new node();
	newNode->counter = 1;
	newNode->dishNumber = dishNum;
	newNode->leftchild = NULL;
	newNode->rightchild = NULL;
	if (empty()) {
		root = newNode;
		return true;
	}
	// if item is already in tree, increments counter
	else if (root->dishNumber == dishNum) {
		root->counter += 1;
		return true;
	}
	// else traverses tree to insert the new node as a child
	else {
		node* tempNode = root;
		node* parentNode = NULL;
		while (tempNode != NULL) {
			parentNode = tempNode;
			if (tempNode->dishNumber == dishNum) {
				tempNode->counter += 1;
				return true;
			}
			// places child node in the proper order, left or right of the parent node
			if (dishNum < tempNode->dishNumber) {
				tempNode = tempNode->leftchild;
			}
			else {
				tempNode = tempNode->rightchild;
			}
		}
		if (dishNum < parentNode->dishNumber) {
			parentNode->leftchild = newNode;
		}
		else {
			parentNode->rightchild = newNode;
		}
		return true;
	}
	return false;
}

bool BinarySearchTree::IsThere(int dishNum) {
	if (empty()) {
		return false;
	}
	// traverses tree inOrder to find if node exists
	else {
		node* tempNode = root;
		while (tempNode != NULL) {
			if (tempNode->dishNumber == dishNum) {
				return true;
			}
			if (dishNum < tempNode->dishNumber) {
				tempNode = tempNode->leftchild;
			}
			else {
				tempNode == tempNode->rightchild;
			}
		}
	}
}

void BinarySearchTree::Print(node* root) {
	// begins with root node and traverses tree to print each element inOrder
	if (root != NULL) {
		// recursive call to Print to find the smallest dishNumber
		Print(root->leftchild);
		switch (root->dishNumber) {
		case 1: {
			cout << "1 - Fried Chicken\t";
			// calls printFormat to properly handle plural orders
			printFormat(root->counter);
			break;
		}
		case 2: {
			cout << "2 - Pork Chops\t\t";
			printFormat(root->counter);
			break;
		}
		case 3: {
			cout << "3 - Baked Chicken\t";
			printFormat(root->counter);
			break;
		}
		case 4: {
			cout << "4 - Grilled Salmon\t";
			printFormat(root->counter);
			break;
		}
		case 5: {
			cout << "5 - Roast Beef\t\t";
			printFormat(root->counter);
			break;
		}
		case 6: {
			cout << "6 - Grilled Steak\t";
			printFormat(root->counter);
			break;
		}
		case 7: {
			cout << "7 - Meat Loaf\t\t";
			printFormat(root->counter);
			break;
		}
		}
		// recursive call to Print to find the right child, ie: the next higher dishNumber
		Print(root->rightchild);
	}
	if (empty()) {
		cout << "No items on the order." << endl;
	}
}

void BinarySearchTree::Display() {
	cout << "Your order: " << endl;
	// because Display() does not take an argument, uses Print to make recursive calls with children
	Print(root);
}
