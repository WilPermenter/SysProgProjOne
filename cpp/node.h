/*
Student Name: Wil Permenter
Student NetID: wbp120
Compiler Used: GCC
Program Description: header file for a simple stack (cpp). Node
*/
using namespace std;
#include<string>

class Node{
    public:

        string data;
        Node* nextNode;

        Node(string Data, Node* next = NULL){
            this->data = Data;
            this->nextNode = next;
        }
        ~Node() {
            this->data = "";
            this->nextNode = NULL;
        }
        
};

