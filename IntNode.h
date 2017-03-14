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
    IntNode * nextPointer;
public:
    //constructors
    IntNode();
    IntNode(int value);
    /*
     Creates an IntNode with a specified value and reference to the next node.
     */
    IntNode(int value, IntNode* nextNode);

    //methods
    int getNodeData();
    IntNode* getNextPointer();

    void setNodeData(int value);
    void setNextPointer(IntNode* updatedNode);

};

#endif /* IntNode_hpp */
