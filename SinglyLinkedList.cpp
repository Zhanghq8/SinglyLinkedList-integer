//*****************************************************************************
//  This source file contains the SinglyLinkedList class definitions.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
 
    head = NULL;
    listLength = 0;

}


int SinglyLinkedList::countNode()
{

	Node* temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		listLength++;
	}
	return listLength;

}

bool SinglyLinkedList::setNode(int data, int index)
{

	Node* temp = head;
	for (int i = 0; i < index-1; i++)
	{
		temp = temp->next;
	}
	temp->data = data;
	return true;   

}

bool SinglyLinkedList::insertNode(int data, int index)
{

	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
    
    if (index == 1)
    {
    	temp1-> next = head;
    	head = temp1;
    	return true;   
    }
    else
    {
    	Node* temp2 = head;
    	for (int i = 0; i < index-2; i++)
    	{
    		temp2 = temp2->next;
    	}
    	temp1->next = temp2->next;
    	temp2->next = temp1;   
	return true;   
    }

}

bool SinglyLinkedList::insertEnd(int data)
{

	Node* temp1 = new Node();

	if (head == NULL)
	{
		temp1->data = data;
		temp1->next = NULL;
		head = temp1;
		return true;   
	}
	else
	{
		temp1 = head;		
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		Node* temp2 = new Node();
		temp2->data = data;
		temp2->next = NULL;
		temp1->next = temp2;
		return true;   
	}

}


bool SinglyLinkedList::deleteNode(int index)
{

	Node* temp1 = head;
	if (index == 1)
	{
		head = temp1->next;
		return true;   
	}
	else
	{
		for (int i = 0; i < index - 2; i++)
		{
			temp1 = temp1->next;
		}
		Node* temp2 = temp1->next;
		temp1->next = temp2->next;
		delete temp2;
		return true;   
	}

}

bool SinglyLinkedList::deleteEnd()
{

	int index = countNode();
	Node* temp1 = head;
	for (int i = 0; i < index - 2; i++)
	{
		temp1 = temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
	return true;   

}

// bool SinglyLinkedList::clearList()
// {

// 	index = countNode();


// }


void SinglyLinkedList::displayNode(int index)
{

	Node* temp = head;
	for (int i = 0; i < index-1; i++)
	{
		temp = temp->next;
	}
	std::cout << temp->data << std::endl;

}

void SinglyLinkedList::displayList()
{

	Node* temp = head;
	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << "" << std::endl;

}

SinglyLinkedList::~SinglyLinkedList()
{

}
