//
//  FileController.hpp
//  MegaProject
//
//  Created by Powley, Matthew on 3/29/17.
//  Copyright © 2017 Powley, Matthew. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.hpp"
#include "../Model/Meme.hpp"
#include "../Model/CrimeData.hpp"
#include <string> // String Type
#include <fstream> //File operations
#include <iostream> //console access
#include <sstream> //String as Stream
#include "../Model/BinarySearchTree.hpp"
#include "../Model/AVLTree.h"
#include "../Model/Graph.hpp"

using namespace std;

class FileController
{
private:
    DoubleList<Meme> memeList;
public:
    DoubleList<Meme> readMemeDataFromFileAsList(string filename);
    void writeMemeDataStatistics(DoubleList<Meme> source, string filename);
    BinarySearchTree<CrimeData> readCrimeDataToBinarySearchTree(string filename);
    AVLTree<CrimeData> readCrimeDataToAVLTree(string filename);
    
    
};

#endif /* FileController_hpp */
