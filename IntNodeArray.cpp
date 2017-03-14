/*
 * IntNodeArray.cpp
 *
 *  Created on: Feb 8, 2017
 *      Author: Kadin
 */

#include "IntNodeArray.h"

#include <assert.h>

IntNodeArray :: IntNodeArray(int size)
{
    assert(size > 0);
    this->size = size;

    this->head = new IntNode();


    /*Starting at 1 because head already points to a valid
      IntNode.
    */
    for(int index = 1; index < size; index++)
    {
        IntNode * currentNode = new IntNode();
        currentNode->setNextPointer(head);
        head = currentNode;
    }
}

int IntNodeArray :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);

    int value = 0;
    IntNode * current = head;

    for(int position =0; position < index; position++)
    {
        current = current->getNextPointer();
    }

    value = current->getNodeData();

    return value;
}

void IntNodeArray :: setAtIndex(int index, int value)
{
    assert(index >= 0 && index < size);

    IntNode* current = head;

    for(int position = 0; position < index; position ++)
    {
        current = current->getNextPointer();
    }

    current->setNodeData(value);

}

int IntNodeArray :: getSize()
{
    return size;
}
