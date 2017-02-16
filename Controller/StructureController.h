/*
 * StructureController.h
 *
 *  Created on: Feb 8, 2017
 *      Author: Kadin
 */

#ifndef MODEL_STRUCTURECONTROLLER_H_
#define MODEL_STRUCTURECONTROLLER_H_

#include "Node.h"
#include <string>

using namespace std;

class StructureController
{
private:
	Node<int> numberNode;
	Node<string> wordNode;
	Array<int> numberArray;
	void testIntArray();
	void testNodeTypes();
	void testArrayTemplate();
public:
	StructureController();
	void start();
};

#endif /* MODEL_STRUCTURECONTROLLER_H_ */
