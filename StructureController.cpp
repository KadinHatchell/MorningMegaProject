/*
 * StructureController.cpp
 *
 *  Created on: Feb 8, 2017
 *      Author: Kadin
 */

#include <iostream>
#include "StructureController.h"
#include "IntNodeArray.h"
#include "DoubleList.h"
#include "Array.h"
#include "List.h"
#include "Timer.cpp"

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
//    cout << "ArrayTemplate" << endl;
//    int test[9];
//    numberArray = Array<int>(9);
}

void StructureController:: testAdvancedFeatures()
{
    int showDestructor = 0;

    if (showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);

    cout << "These shoud match:" << endl;
    cout << words.getFromIndex(0) << " shoud be the same as " << copiedWords.getFromIndex(0) << endl;

    copiedWords.setAtIndex(3, "Changed the contents of the copied Array");
}

void StructureController :: testList()
{
    List<int> sample;
    sample.addFront(2);
    sample.addEnd(3);
    sample.addFront(1);
    cout << "This should say 1 2 3" << endl;

    for (int index = 0; index < sample.getSize(); index ++ )
    {
        cout << sample.getFromIndex(index) << endl;
    }

    cout << "Size should read 3 and is " << sample.getSize() << endl;

    cout << "removing second spot" << endl;
    cout << "the removed data should be 2 and is " << sample.remove(1) << endl;
    cout << "size should be 2 and is " << sample.getSize() << endl;
    cout << "list should read 1 3" << endl;
    for (int index = 0; index < sample.getSize(); index ++ )
    {
        cout << sample.getFromIndex(index) << endl;
    }



}

void StructureController :: start()
{
//    cout << "Going to test the IntNodeArray" << endl;
//    testIntArray();
//    cout << "Finished IntArrayNode testing" << endl;
//
//    cout << "Testing generic nodes" << endl;
//    testNodeTypes();
//    cout << "done testing generic nodes" << endl;

//    cout << "testing advanced features." << endl;
//    testAdvancedFeatures();
//    cout << "done testing advanced features." << endl;

    testList();
}

void StructureController :: testDestructor()
{

}

void StructureController :: testAdvancedFeatures()
{

}

void StructureController :: testListIntro()
{

}

void StructureController :: testDoubleLists()
{

}

void StructureController :: testListTiming()
{
	DoubleList<int> timingList;
	for(int index = 0; index < 10000; index++)
	{
		timingList.add(rand());
	}

	long slowTime [1000];
	long fastTime [1000];
	double averageSlow = 0.00, averageFast = 0.00;
	Timer doubleTimer;

	for(int index = 0; index < 1000; index++)
	{
		int randomIndex = rand() % 10000;
		doubleTimer.startTimer();
		timingList.getFromIndex(randomIndex);
		doubleTimer.stopTimer();
		slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
		doubleTimer.resetTimer();

		doubleTimer.startTimer();
		timingList.getFromIndexFast(randomIndex);
		doubleTimer.stopTimer();
		fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
		doubleTimer.resetTimer();

		averageSlow += slowTime[index];
		averageFast += fastTime[index];
	}

	averageSlow = averageSlow/1000;
	averageFast = averageFast/1000;

	cout << "The average speed for the getFromIndex method was: " << averageSlow << " microseconds." << endl;
	cout << "The average speed for the getFromIndexFast method was: " << averageFast << " microseconds." << endl;
	cout << "A time savings?? of: " << averageSlow - averageFast << " microseconds." << endl;
