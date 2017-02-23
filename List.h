/*
 * List.h
 *
 *  Created on: Feb 23, 2017
 *      Author: Kadin
 */

#ifndef LIST_H_
#define LIST_H_

template <class Type>
class List
{
private:
    int size;
    Node<Type>* front;
    Node<Type>* end;
public:
    //constructor
    List<Type>();
    //copy constructor
    List<Type>(const List<Type> & source);
    //destructor
    ~List<Type>();

    //Methods
    void addAtIndex(int index, Type value);
    void addFront(Type value);
    void addEnd(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    Type getFromIndex(int index);
    bool contains(Type data);

    int getSize() const;
    Node<Type>* getFront() const;
    Node<Type>* getEnd() const;
};



template <class Type>
List<Type> :: List<Type>()
{
    this->size = 0;
    this->front = nullptr;
    this->end = nullptr;
}

template <class Type>
List<Type> :: List<Type>(const List<Type> & source)
{

}

template <class Type>
List<Type> :: ~List<Type>()
{

}

template <class Type>
void List<Type> :: addFront(Type value)
{
    //default case when adding to an empty list.
    if(size == 0)
    {
        //create thew new node giving it value from method parameter.
        Node<Type> * first = new Node<Type>(value);
        //front and end now point to the new/first/only node in the list.
        this->front = first;
        this->end = first;
    }
    //done when the list is not empty
    else
    {
        //creates the new node to be added with the value from method parameter
        //and makes it point to front.
        Node<Type> * newFirst = new Node<Type>(value, front);
        //or
        //Node<Type> * newFirst = new Node<Type>();
        //newFirst->setNodeData(value);
        //newFirst->setNodePointer(front);

        //front now will point to the new node.
        front = newFirst;
    }

    size++;
}

template <class Type>
void List<Type> :: addEnd(Type value)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    size++;
}




#endif /* List_h */
