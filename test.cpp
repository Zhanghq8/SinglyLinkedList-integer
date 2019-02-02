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
	nodelist.deleteEnd();
	nodelist.reverseList();
	std::cout << nodelist.countNode() << std::endl;	
	nodelist.insertNode(1,1);
	std::cout << nodelist.countNode() << std::endl;	
	nodelist.insertEnd(2);
	std::cout << nodelist.countNode() << std::endl;	
	nodelist.insertEnd(1);
	nodelist.insertEnd(1);
	nodelist.displayList();
	std::cout << nodelist.countNode() << std::endl;	
	nodelist.insertNode(4,2);
	nodelist.displayList();
	nodelist.setNode(3,1);
	nodelist.displayList();
	nodelist.deleteNode(2);
	nodelist.displayList();
	nodelist.deleteEnd();
	nodelist.displayList();
	nodelist.reverseList();
	nodelist.displayList();
	nodelist.insertNode(2, 20);
	nodelist.setNode(3, 20);
	nodelist.deleteNode(20);
	nodelist.displayNode(10);



}