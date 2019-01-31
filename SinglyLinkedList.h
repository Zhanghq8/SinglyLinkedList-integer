//*****************************************************************************
//  This header file contains the SinglyLinkedList class declarations.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#ifndef SinglyLinkedList_h
#define SinglyLinkedList_h

#include <iostream>
#include <string>

struct Node
{
    int data;
    Node* next;
};

class SinglyLinkedList
{
private:
    Node* head;
    int listLength;
    
public:
    
    //constructor
    SinglyLinkedList();

    //returns the number of node in current list
    int countNode();

    //modified a node at a specific position
    bool setNode(int data, int index);

    //insert a node at the end of the list
    bool insertEnd(int data);

    //insert a node at a specific position
    bool insertNode(int data, int index);

    //delete a node at a specific position
    bool deleteNode(int index);

    //delete last node
    bool deleteEnd();

    // //delete all node in current list
    // bool clearList();


    //read node at a specific position
    void displayNode(int index);

    //read current list
    void displayList();
    
    //deconstructor
    ~SinglyLinkedList();
};

#endif