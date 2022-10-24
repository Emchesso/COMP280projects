// Ethan Chesson
// Dr. Brown
// COMP 280
// 6/22/2022

#pragma once
struct node
{
    int dishNumber;
    int counter;
    node* leftchild;
    node* rightchild;
};

class BinarySearchTree
{
public:
    BinarySearchTree();
    bool empty(); // return true if the tree is empty, otherwise return false
    bool Insert(int dishNum);//insert a value dishNum 
    bool IsThere(int dishNum);
    //return true if dishNum is in the tree, otherwise return false
    void Print(node* root); // used in Display to provide root node for recursive traversing of the tree
    void Display();
    //Display the data stored from smallest to largest based on dish number

private:
    node* root;//pointer to the root node
};
