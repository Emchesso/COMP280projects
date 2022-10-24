// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/12/2022

#pragma once
typedef int ElementType;
struct node {
	ElementType data;
	node* next;
};

class List
{
public:
	List(); //Create an empty list
	bool Empty(); // return true if the list is empty, otherwise return false
	void InsertAtEnd(ElementType x); //insert a value x on the end of the list
	void Delete(ElementType x); //if value x is in the list, remove x
	void Display(); //Display the data values in the list in the order inserted	
	int findlargest(); // Find and return the value of the largest value in the list
	int Findsmallest(); //Find and return the smallest value in the list
	int Range(); // Calculate and return the range of values in the list


private:
	node* first; //pointer to first node
};
