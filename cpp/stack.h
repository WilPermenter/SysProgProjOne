/*
Student Name: Wil Permenter
Student NetID: wbp120
Compiler Used: GCC
Program Description: header file for a simple stack (cpp). Includes Push/Pop aswell as create and destroy
*/
using namespace std;
#include <string>
#include "node.h"


class Stack {
    public:
        Node* head;
        int count;

    //constructor
    Stack(){
        this->head = NULL;
        this->count = 0;
    }
    //destructor 
    ~Stack(){
        this->head = NULL;
        this->count = 0;
    }

    //pop
    string pop(){

        Node* temp = this->head;

        
        string str = temp->data;

        
        try{
            this->count -= 1;
            
        }catch(...){
            return "SetupFailed in pop()";
        }
        
        try{
            this->head = this->head->nextNode;
            
            delete temp;            
        }catch(...){
            return "OperationFailed in pop()";
        }
        return str;

    return this->head->data;
    }
    //push
    bool push(string input)
    {
        this->count += 1;
        this->head = new Node(input,this->head);
        return true;
    }
    //size
    int size(){
        return this->count;
    }


    // isEmpty
    bool isEmpty(){
        return !this->count;
    }


};