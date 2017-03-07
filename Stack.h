/*
 * Stack.h
 *
 *  Created on: Mar 7, 2017
 *      Author: Kadin
 */

#ifndef STACK_H_
#define STACK_H_
#include "DoublyLinkedList.h"

template <class Type>
class Stack : public DoublyLinkedList<Type>
{
private:
public:
    Stack();
    ~Stack();
    void add(Type value);
    Type remove(int index);
    Type pop();
    Type peek();
    void push(Type data);

};


/**
 The add method on a stack only adds to the end, never at an index.
 */
template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(value);
}


/*
 Adds a new supplied value to the end of the stack.
 set new object to point to end.
 Increases the size by 1.
 Adjusts the end pointer to relfect the new end of the stack.
 */
template <class Type>
void Stack<Type> :: push(Type valueToAdd)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode(valueToAdd);

    if(this->size == 0)
    {
        this->front = addToStack;

    }
    else
    {
        this->getEnd()->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->getEnd());

    }
    this->setEnd(addToStack);
    this->setSize(this->getSize() + 1);
}

#endif /* Stack_h */
