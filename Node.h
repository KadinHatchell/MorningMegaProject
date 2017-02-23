/*
 * Node.h
 *
 *  Created on: Feb 13, 2017
 *      Author: Kadin
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_

template <class Type>
class Node
{
private:
	Type nodeData;
	Node<Type>* nodePointer;
public:
	Node<Type>();
	Node<Type>(Type data);
	Node<Type>(Type data, Node * nextPointer);

	Type getNodeData();
	Node<Type> * getNodePointer();
	void setNodeData(Type value);
	void setNodePointer(Node * nextPointer);
};

//Implementation section of the templated calss!

template <class Type>
Node<Type> :: Node()
{
	nodePointer = nullptr;
	//NOT Initializein
}

template <class Type>
Node<Type> :: Node<Type>(Type data)
{
	this-->nodeData = data;
	this-->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node<Type>(Type data, Node * nextNode)
{
	this-->nodeData = value;
	this-->nodePointer = nextNode;
}



#endif /* MODEL_NODE_H_ */
