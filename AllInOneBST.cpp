#include <iostream>
using namespace std;

//Header
class Node{

    public:

    int data;
    Node* left;
    Node* right;

    Node* addNode(Node* headNode, int argData);
    void printTreeInOrder(Node* headNode);
    Node* getNewNode(int argData);


};

Node* Node::getNewNode(int argData){

    Node* newNode = new Node;
    newNode->data = argData;
    newNode->left = newNode->right = NULL;

    return newNode;

}

//Functions
Node* Node::addNode(Node* headNode, int argData){

    if(headNode == NULL){

        headNode = getNewNode(argData);

    } else if (argData <= headNode->data){

        headNode->left = addNode(headNode->left, argData);

    } else {

        headNode->right = addNode(headNode->right, argData);

    }

    return headNode;

}

void Node::printTreeInOrder(Node* headNode){

    if (headNode != NULL){

        printTreeInOrder(headNode->left);
        cout << headNode->data << " ";
        printTreeInOrder(headNode->right);

    }


}

//Main
int main(){

    Node TestTree;

    Node* headNode = NULL;

    int userEnteredData = 0;

    headNode = TestTree.addNode(headNode, 21);
    headNode = TestTree.addNode(headNode, 18);
    headNode = TestTree.addNode(headNode, 65);
    headNode = TestTree.addNode(headNode, 53);
    headNode = TestTree.addNode(headNode, 75);

    cout << "Enter an integer to add to the BST: ";
    cin >> userEnteredData;

    headNode = TestTree.addNode(headNode, userEnteredData);

    cout << "In order traversal: " << endl;
    TestTree.printTreeInOrder(headNode);
    cout << endl;

}