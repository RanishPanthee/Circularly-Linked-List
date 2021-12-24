#include <iostream>
#include "circular_linked_list.h"

LinkedList::LinkedList() //Defining constructor
{
    ptr=nullptr;
}

bool LinkedList::isEmpty() //Returns true if the stack is empty and false otherwise
{
    return ptr == nullptr;

}

void LinkedList::push(int element) //Inserts an element into the stack.
{
    Node *newNode = new Node(element,ptr);
    newNode->info=element;
    if (this->isEmpty())
    {
        ptr = newNode;
    }
    else{
        newNode->next=ptr->next;
    }
    ptr->next=newNode;
}


void LinkedList::pop() //Displays and deletes an element at the top of the stack.
{
     if (!this->isEmpty())
    {
        Node *top;
        top = ptr->next;
        int data;
        data = top->info;
        if(top==ptr)
        {
            ptr=nullptr;
        }
        else
        {
            ptr->next=top->next;
        
        }
        std::cout <<">>>  Element popped out from stack is :: "<< data <<"\n\n";
        delete top;
    }

    else{
        std::cout <<"----STACK IS EMPTY----\n\n";
    }
}

void LinkedList::top() //Displays the element at the top of the stack.
{
    if (!this->isEmpty())
    {
        Node *peek;
        peek=ptr->next;
        int topelement;
        topelement = peek->info;
        std::cout <<">>>  Element in top of the stack is :: "<< topelement <<"\n\n";
    }
    else
    {
       std::cout <<"----STACK IS EMPTY----\n\n";   
    }
}