/*
 * IntNode.cpp
 *
 *  Created on: Feb 6, 2017
 *      Author: Kadin
 */

#include "IntNode.h"

IntNode :: IntNode()
{
    this->nodeData = -999;
    this->nextPointer = nullptr;
}

IntNode :: IntNode(int data)
{
    this->nodeData = data;
    this->nextPointer = nullptr;
}

IntNode :: IntNode(int nodeData, IntNode* next)
{
    this->nodeData = nodeData;
    this->nextPointer = next;
}

int IntNode :: getNodeData()
{
    return nodeData;
}

IntNode * IntNode :: getNextPointer()
{
    return nextPointer;
}

void IntNode :: setNodeData(int nodeData)
{
    this->nodeData = nodeData;
}

void IntNode :: setNextPointer(IntNode *next)
{
    this->nextPointer = next;
}
