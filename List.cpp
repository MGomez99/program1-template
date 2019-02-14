#include "List.h"

Node::Node(Planet * p)
{
	this->data = p;
}
List::List()
{
	this->head = NULL;
	this->tail = NULL;	
}

List::~List()
{
}

void List::insert(int index, Planet *p)
{
	if(index >= this->size || index < 0)
	{
		this->tail->next = new Node(p); //create new node at the end
		this->tail->next->prev = this->tail; //set prev pointer of the new node
		this->tail= this->tail->next; //new node is now tail
		this->size++;
	}
	else
	{
		Node * newNode = new Node(p);
		Node * temp = this->head;
		//get to index position
		for(int i = 0; i < index; i++)
		{
			if(temp != NULL){
				temp = temp->next;
			}
		}
		//temp holds previous node at given index
		temp->prev->next = newNode; //insert at index
		newNode->prev = temp->prev;	
		newNode->next = temp;
		temp->prev = newNode; //previous node is put after inserted node
	}
}

Planet* List::read(int index)
{
	if(index >= this->size || index < 0) return NULL;
	else
	{
		Node * temp = this->head;
		//get to index position
		for(int i = 0; i < index; i++)
		{
			if(temp != NULL){
				temp = temp->next;
			}
		}
		//temp holds previous node at given index
		return temp->data;
	}
}

bool List::remove(int index)
{
	if(index >= this->size || index < 0) return false;
	else
	{
		
	}
	return true;
}
