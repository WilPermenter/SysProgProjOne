/*
Student Name: Wil Permenter
Student NetID: wbp120
Compiler Used: GCC
Program Description: header file for a simple stack. Includes Push/Pop aswell as create and destroy
*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct Node
{
    char *data;
    struct Node *nextNode;
}Nodes;


typedef struct Stack
{
    struct Node *head;
    int count;
}Stacks;

struct Stack* newStack()
{
    struct Stack* stack = malloc(sizeof(Stacks));

    stack->head = NULL;
    stack->count = 0;

    return stack;
}
struct Node* newNode()
{
    return (struct Node* ) malloc(sizeof(Nodes));
}

void pop(struct Stack *stack, char *output)
{
    strcpy(output,stack->head->data);

    struct Node* temp = stack->head;
    stack->head = stack->head->nextNode;

    free(temp->data);
    free(temp);
    stack->count -= 1;
    return;
}

void push(struct Stack *stack, char input[])
{
    struct Node* node = newNode();
    node->data = malloc(sizeof(&input));

    strcpy( node->data , input);

    //Check If empty stack
    if(stack->head == NULL)
    {
        stack->head = node;
    }else{
       node->nextNode = stack->head;
       stack->head = node; 
    }
    stack->count += 1;

    return;
}

int stackSize(struct Stack *stack)
{
    return stack->count;
}
void deleteStack(struct Stack *stack)
{
    free(stack);
    return;
}

int isEmpty(struct Stack *stack)
{
    if(stack->head == NULL)
    {
        return 1;
    }else{
        return 0;
    }

}
