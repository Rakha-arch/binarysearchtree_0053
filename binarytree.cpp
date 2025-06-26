#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string i, Node* l, Node* r) {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree {
public:
    Node* ROOT;

    BinaryTree() {
        ROOT = NULL;
    }

    void insert(string element) {
        
        search(element, parent, currentNode);

       

     
    }

    void search(string element, Node*& parent, Node*& currentNode) {
         {
        
        }
    }

    void inorder(Node* ptr) {
        if (ROOT == NULL) {
           
        }
        if (ptr != NULL) {
           
        }
    }

    void preorder(Node* ptr) {
        if (ROOT == NULL) {
           
        }
        if (ptr != NULL) {
           
        }
    }

    void postorder(Node* ptr) {
        if (ROOT == NULL) {
            
        }
        if (ptr != NULL) {
           
        }
    }
};

int main() {
    BinaryTree obj;
    while (true) {
       

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch) {
            
            
        }
    }
}