/*
 * IntNode.h
 *
 *  Created on: Feb 6, 2017
 *      Author: Kadin
 */

#ifndef MODEL_INTNODE_H_
#define MODEL_INTNODE_H_

class IntNode
{
private:
	int nodeData;
	IntNode * nodePointer;
public:
	//Constructors
	IntNode();
	IntNode(int value);
	/*
	 * Creates an IntNode with a specified value and reference to the next node.
	 */
	IntNode(int value, IntNode * nextNode);
	int getNodeData();
	    IntNode* getNodePointer();

	    void setNodeData(int value);
	    void setNodePointer(IntNode* updatedNode);
};

#endif /* MODEL_INTNODE_H_ */
