#include <iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node *lefthild;
    Node *rightchild;

    // Constuktor
    Node()
    {
        lefthild = nullptr; // Initaliaze     left child to null
        rightchild = nullptr; // Initaliaze right child to null

    }
};
