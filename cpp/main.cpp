/*
Student Name: Wil Permenter
Student NetID: wbp120
Compiler Used: GCC
Program Description: main.cpp file to show how stack.h works
*/
#include<iostream>
#include "stack.h"
using namespace std;

int main(void)
{
    //Setup
    Stack *stack = new Stack();
    bool loop = true;
    string input = "";
    //Loop
    while(loop){
        cout << "\nType Something to add to the stack (Type 'STOP' to end): ";
        cin >> input;
        if(input == "STOP"){
            loop = false;
            for(int x = stack->count; x > 0; --x){
               cout << stack->pop() + "\n";
            };
        }else{
            stack->push(input);
        }

    }
    //Cleanup
    //delete(stack);
    return 1;
}
