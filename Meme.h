/*
 * Meme.h
 *
 *  Created on: Mar 13, 2017
 *      Author: Kadin
 */

#ifndef MEME_H_
#define MEME_H_
#include <string>

using namespace std;

class Meme
{
private:
	string title;
	int dankness;
	double hipsterQuotient;
	bool mainstream;
public:
	Meme();
	Meme(string title);
	int getDankness();
	double getHipsterQuotient();
	bool isMainstream();
	string getTitle();
	void setTitle(string title);
	void setDankness(int dank);
	void setHipsterQuotient(double hipsterQuotient);
	void setMainStream(bool mainstream);
};

#endif /* MEME_H_ */
