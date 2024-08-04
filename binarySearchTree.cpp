#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* insertIntoBST(node* root, int d)
{
    // base case
    if(root  == NULL)
    {
        root = new node(d);
        return root;
    }

    if(d > root -> data)
    {
        // right part me insert krna h
        root -> right = insertIntoBST(root -> right, d);
    }
    else
    {
        // left part me inser karna h
        root -> left = insertIntoBST(root -> left, d);
    }
    return root;
}

void takein