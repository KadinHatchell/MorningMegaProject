/*
 * StructureController.cpp
 *
 *  Created on: Feb 8, 2017
 *      Author: Kadin
 */

#include "IntNodeArray.h"
#include "Array.h"
#include "Timer.cpp"
#include "StructureController.h"
#include <iostream>

using namespace std;

StructureController :: StructureController()
{
	wordNode = Node<string>("derpy");
	numberNode = Node<int>();
	numberArray = Array<int>();
}

StructureCotnroller :: testArrayTemplate()
{
	cout << "Array Template" << endl;
	Timer arrayTimer;
	arrayTimer.startTimer();
	int test[9];
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
	arrayTimer.resetTimer();
	arrayTimer.startTimer();
	numberArray = Array<int>(9);
	arrayTimer.stopTimer();
	arrayTimer.dispalyTimerInformation();
}

void StructureController :: testNodeTypes()
{
	cout << "Here is a string node" << endl;
	cout << wordNode.getNodeData() << endl;
	cout << "Here is a an uninitialized in node" << endl;
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

void StructureController :: start()
{
    cout << "Going to test the IntNodeArray" << endl;
    testIntArray();
    cout << "Finished IntArrayNode testing" << endl;
}
