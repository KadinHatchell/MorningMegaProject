/*
 * CircularList.h
 *
 *  Created on: Mar 13, 2017
 *      Author: Kadin
 */

#ifndef CIRCULARLIST_H_
#define CIRCULARLIST_H_

#include "DoublyLinkedList.h"

template<class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    CircularList();
    ~CircularList();

    void add(Type data);
    void addAtIndex(int index, Type data);

    Type remove(int index);


};
#endif /* CircularList_h */
