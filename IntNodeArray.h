/*
 * IntNodeArray.h
 *
 *  Created on: Feb 8, 2017
 *      Author: Kadin
 */

#ifndef MODEL_INTNODEARRAY_H_
#define MODEL_INTNODEARRAY_H_

#include "IntNode.h"

class IntNodeArray
{
private:
    IntNode* head;
    int size;
public:
    IntNodeArray(int bigness);
    int getSize();
    int getFromIndex(int idnex);
    void setAtIndex(int index, int value);
};

#endif /* IntNodeArray_hpp */
