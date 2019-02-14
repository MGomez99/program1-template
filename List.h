#ifndef LIST_HEADER1
#define LIST_HEADER1

#include <iostream>
#include <cstdlib>

class Node{
	public:
		Node();
		~Node();
		Node * prev = NULL;
		Node * next = NULL;
};

class List{
	public:
		List(); //Constructor
		~List(); //Destructor
		void insert(int index, Planet* p); //Inserts an element at index, increasing the List size by 1. Iff index is out of bounds, append to the end of the list.
		Planet* read(int index); //Returns a pointer to the Planet object at index, IOOB ret NULL
		bool remove(int index); //Removes Planet object at index, decrementing size of list by 1. Returns true on success, false else
		unsigned size(); //size of list
		Node * head; //Head of list
};



#endif
