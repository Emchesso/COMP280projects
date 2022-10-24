#pragma once
typedef int ElementType;
const int MAX = 100;
class List
{
public:
	List(); //Create an empty list
	bool Empty(); // return true if the list is empty, otherwise return false (check if first element is NULL)
	void InsertAtEnd(ElementType x); //insert a value x on the end of the list
	void Delete(ElementType x); //if value x is in the list, remove x
	void Display(); //Display the data values in the list in the order inserted	
	int findlargest(); // Find and return the value of the largest value in the list
	int Findsmallest(); //Find and return the smallest value in the list
	int Range(); // Calculate and return the range of values in the list

private:
	int N; //number of values in list
	ElementType listArray[MAX]; //the array to hold the list values
};
