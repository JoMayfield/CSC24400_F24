// File to test the BST Node and BST classes we defined
#include "BST_Node.hpp"
#include "BST.hpp"
#include <iostream>
using namespace std;

int main ()
{
    // TESTING BST_NODE CLASS -----------------------
    // Create a node with value 7
    BST_Node n = BST_Node(7);

    // Try cout-ing its data and its children
    // (Children should be null for now)
    cout << "Data: " << n.ndata() << endl;
    cout << "Left child: " << n.left() << endl;
    cout << "Right child: " << n.right() << endl;

    // Create a node with value 8
    BST_Node n2 = BST_Node(8);

    // Make 8 have 7 has a left child
    n2.left() = &n;
    // Try cout-ing 8's left child's data
    cout << "n2's left child: " << n2.left()->ndata() << endl;

    // TESTING BST CLASS ----------------------------
    BST myTree;
    myTree.insert(49);
    myTree.insert(64);
    myTree.insert(16);
    myTree.insert(25);
    myTree.insert(36);
    myTree.insert(4);
    myTree.insert(2);
    myTree.insert(100);
    myTree.insert(81);
    // Try drawing out this tree!

    myTree.print();
    myTree.remove(16);
    myTree.print();

    return 0;
}
