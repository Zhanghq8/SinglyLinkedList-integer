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
}


int SinglyLinkedList::countNode()
{
	int count = 0;
	Node* temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return count;
}

bool SinglyLinkedList::setNode(int data, int index)
{
	int count = countNode();
	if (index > 0 || index <= count)
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)" << std::endl;
		return false;
	}
	else
	{
		Node* temp2 = head;
		for (int i = 0; i < index-1; i++)
		{
			temp2 = temp2->next;
		}
		temp2->data = data;
		return true;
	}
}

bool SinglyLinkedList::insertNode(int data, int index)
{
	int count = countNode();
	if (index < 0 || (count == 0 && index >1))
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)." << std::endl;
		return false;
	}
	else
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
	int count = countNode();
	if (index > 0 || index <= count)
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)." << std::endl;
		return false;
	}
	else
	{
		Node* temp1 = head;
		if (index == 1)
		{
			head = temp1->next;
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
}

bool SinglyLinkedList::deleteEnd()
{
	int index = countNode();
	if (index == 0)
	{
		std::cout << "Empty list" << std::endl;
		return false;
	}
	else
	{
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
}

// bool SinglyLinkedList::clearList()
// {

// 	index = countNode();


// }

bool SinglyLinkedList::reverseList()
{
	int count = countNode();
	if (count == 0)
	{
		std::cout << "Empty list" << std::endl;
		return false;
	}
	else
	{
		Node* previous, * current, * next;
		current = head;
		previous = NULL;
		while (current != NULL)
		{
			next = current -> next;
			current -> next = previous;
			previous = current;
			current = next;
		}
		head = previous;
		return true;
	}
}

bool SinglyLinkedList::displayNode(int index)
{
	int count = countNode();
	if (count == 0)
	{
		std::cout << "Empty list" << std::endl;
		return false;
	}
	if (index < 0 || index > count)
	{
		std::cout << "ERROR: the index is out of range!(from 1 to max number)." << std::endl;
		return false;
	}
	else
	{
		Node* temp = head;
		for (int i = 0; i < index-1; i++)
		{
			temp = temp->next;
		}
		std::cout << temp->data << std::endl;
		return true;
	}
}

bool SinglyLinkedList::displayList()
{
	int count = countNode();
	if (count == 0)
	{
		std::cout << "Empty list." << std::endl;
		return false;
	}
	else
	{
		Node* temp = head;
		while (temp != NULL)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << "" << std::endl;
		return true;
	}
}


// bool SinglyLinkedList::printList(Node* head)
// {
// 	if (head == NULL)
// 	{
// 		return false;
// 	}
// 	else	
// 	{
// 		std::cout << head->data << " ";
// 		printList();
// 		return true;
// 	}	
// }


SinglyLinkedList::~SinglyLinkedList()
{

}
