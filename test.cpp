//*****************************************************************************
//  This source file contains the SinglyLinkedList class test.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include <iostream>
#include "SinglyLinkedList.h"

int main()
{
	SinglyLinkedList nodelist;
	nodelist.insertNode(1,1);
	nodelist.insertEnd(2);
	nodelist.insertEnd(1);
	nodelist.insertEnd(1);
	nodelist.displayList();
	nodelist.setNode(3,1);
	nodelist.displayList();
	nodelist.deleteNode(1);
	nodelist.displayList();
	nodelist.deleteEnd();
	nodelist.displayList();


}