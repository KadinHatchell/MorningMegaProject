//
//  StructureController.hpp
//  MegaProject
//
//  Created by Kadin on 2/8/17.
//  Copyright © 2017 Kadin. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include "../Model/Queue.hpp"
#include "../Model/Meme.hpp"
#include <string>
#include "../Model/List.h"
#include "../Model/Timer.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/BinarySearchTree.hpp"
#include "../Model/CrimeData.hpp"
#include "FileController.hpp"
#include "../Model/Graph.hpp"
#include "../Model/HashTable.h"

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
    void testList();
    void testDoubleList();
    void testMemeQueue();
    void testNumberStack();
    void testDoubleListTiming();
    void testBinarySearchTree();
    void testBinarySearchCrime();
    void testAVLTreeOperations();
    void testAVLCrimeData();
    void testGraph();
    void hashTableUse();
public:
    StructureController();
    void start();
    
};

#endif /* StructureController_hpp */
