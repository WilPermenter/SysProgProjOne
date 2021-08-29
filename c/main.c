/*
Student Name: Wil Permenter
Student NetID: wbp120
Compiler Used: GCC
Program Description: main.c file to show how stack_p.h works
*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "stack_p.h"

int main(void)
{
    struct Stack* stack = newStack();
    int cont_loop = 1;

    while(cont_loop){
        char data[16];

        printf("\nType Something to add to the stack (Type 'STOP' to end): ");
        scanf("%s", data);

        if(strcmp(data , "STOP")){
            push(stack, data);
            printf("%s", data);

        }else{

            printf("\nStopping... Displaying Items in reverse!\n");

            //reach into stack to get # of items
            for(int x = stack->count - 1; x >= 0; x -= 1)
            {
                pop(stack,data);
                printf("\n%s\n", data);
            }
            cont_loop = 0;
        }
    }

    deleteStack(stack);
    return 0;
}
