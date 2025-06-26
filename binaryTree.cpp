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
        lefthild = nullptr;   // Initaliaze     left child to null
        rightchild = nullptr; // Initaliaze right child to null
    }
};
class BinaryTree
{
public:
    Node *ROOT;
    BinaryTree()
    {
        ROOT = nullptr; // Initalizing Root to Null
    }
    void search(int element, Node *&parent, Node *&currentNode)
    {
        // This funcion searchas the currrentNode fo the specified Node as well as the curren
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->lefthild;
            else
                currentNode = currentNode->rightchild;
        }
    }


void insert()
{
    int x;
    cout << "Masukan nilai";
    cin >> x;

}