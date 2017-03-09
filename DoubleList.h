/*
 * DoubleList.h
 *
 *  Created on: Mar 9, 2017
 *      Author: Kadin
 */

#ifndef DOUBLELIST_H_
#define DOUBLELIST_H_

#include "DoubleLinkedList.h"

template <class Type>
class DoubleList : public DoublyLinkedList<Type>
{
private:
public:
    DoubleList();
    ~DoubleList();
    void add(Type data);
    Type remove(int index);
    void addAtIndexFast(int index, Type value);
    void addAtIndex(int index, Type value);
    Type getFromIndex(int index);
    Type getFromIndexFast(int index);
};



template <class Type>
Type DoubleList<Type> :: getFromIndex(int index)
{

}

template <class Type>
void DoubleList<Type> :: add(Type value)
{
	BiDirectionalNode<Type> * addedNode = new BiDirectionalNode<Type>(value);
	if(this->getSize() == 0)
	{
		this->setFront(addedNode);

	}
	else
	{
		this->getEnd()->setNextPointer(addedNode);
		addNode->setPreviousPointer(this->getEnd());
	}
	this->setEnd(addedNode);
	this->setSize(this->getSize() + 1);
}

template <class Type>
Type DoubleList<Type> :: remove(int index)
{
	Type derp;
	BiDirectionalNode<Type> * nodeToTakeOut = this->getFront();
	for(int spot = 0; spot < index; spot++)
	{
		nodeToTakeOut = nodeToTakeOut->getNextPointer();
	}
	derp = nodeToTakeOut->getNodeData();

	BiDirectionalNode<Type> * prev = nodeToTakeOut->getPreviousPointer();
	BiDirectionalNode<Type> * prev = nodeToTakeOut->getNextPointer();

	prev->setNextPointer(next);
	next->setPreviousPointer(previous);

	delete nodeToTakeOut;

	this->setSize(this-getSize() - 1);
	return derp;
}

#endif /* DoubleList_h */
