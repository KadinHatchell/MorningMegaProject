/*
 * StructureController.cpp
 *
 *  Created on: Feb 8, 2017
 *      Author: Kadin
 */

#include "StructureController.h"
#include <iostream>
#include "IntNodeArray.h"
#include "Array.h"

using namespace std;

StructureController :: StructureController()
{
    wordNode = Node<string>("derpy");
    numberNode = Node<int>();
    numberArray = Array<int>(1);
}

void StructureController :: testNodeTypes()
{
    cout << "Here is a string node" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is an unitilialized int ndoe" << endl;
    cout << numberNode.getNodeData() << endl;
}

void StructureController :: testIntArray()
{
    cout << "Creating an IntNodeArray" << endl;
    IntNodeArray temp = IntNodeArray(3);
    for(int spot =0; spot < 3; spot ++)
    {
        cout << temp.getFromIndex(spot) << " is at " << spot << endl;
    }

    for(int spot = 0; spot < 3; spot++)
    {
        temp.setAtIndex(spot, spot);
    }

    for (int spot = 0; spot < temp.getSize(); spot++)
    {
        cout << temp.getFromIndex(spot) << " is at " << spot << endl;
    }
}

void StructureController :: testArrayTemplate()
{
    cout << "ArrayTemplate" << endl;
    int test[9];
   // numberArray = Array<int>(9);
}

void StructureController :: start()
{
    cout << "Going to test the IntNodeArray" << endl;
    testIntArray();
    cout << "Finished IntArrayNode testing" << endl;

    cout << "Testing generic nodes" << endl;
    testNodeTypes();
    cout << "done testing generic nodes" << endl;
}
