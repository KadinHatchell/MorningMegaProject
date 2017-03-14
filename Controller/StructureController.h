/*
 * StructureController.h
 *
 *  Created on: Feb 8, 2017
 *      Author: Kadin
 */

#ifndef MODEL_STRUCTURECONTROLLER_H_
#define MODEL_STRUCTURECONTROLLER_H_



#include "Node.h"
#include "Array.h"
#include "Queue.h"
#include "Meme.h"
#include <string>
#include "List.h"

using namespace std;

class StructureController
{
private:
    Node<int> numberNode;
    Node<string> wordNode;
    Array<int> numberArray;
    List<int> sample;

    void testIntArray();
    void testNodeTypes();
    void testArrayTemplate();
    void testAdvancedFeatures();
    void testListIntro();
    void testDoubleLists();
    void testListTiming();
    void testMemeQueue();
    void testNumberStack();
public:
    StructureController();
    void start();

};

#endif /* StructureController_hpp */
