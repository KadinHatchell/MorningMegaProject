/*
 * BidirectionalNode.h
 *
 *  Created on: Feb 27, 2017
 *      Author: Kadin
 */

#ifndef BIDIRECTIONALNODE_H_
#define BIDIRECTIONALNODE_H_

template <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
	Type data;
	BiDirectionalNode<Type> * nextPointer;
	BiDirectionalNode<Type> * previousPoinnter;
public:
	BiDirectionalNode();
	BiDirectionalNode(Type data);
	BiDirectionalNode(Type data, DiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next)

	Type getNodeData();
	BiDirectionalNode<Type> * getNextPointer();
	BiDirectionalNode<Type> * getPreviousPointer();

	void setNodeData(Type data);
	void setNextPointer(BiDirectionalNode<Type> * next);
	void setPreviousPointer(BiDirectionalNode<Type> * previous);
};

template <class Type>
BiDirectionalNode :: BiDireactionalNode() : Node()


#endif /* BIDIRECTIONALNODE_H_ */
