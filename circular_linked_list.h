#ifndef STACK_H
#define STACK_H
#include <iostream>

class Node
{
public:
    int info;
    Node *next;

    Node()
    {
        next = nullptr;
    }  
    Node(int info, Node *next) 
    {

     info=info; 
     next=next;
    }
};

class LinkedList
{
public:
    LinkedList();
    void push(int data);
    void pop();
    void top();
    bool isEmpty();

private:
    Node *ptr;
};
#endif