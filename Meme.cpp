#include "Meme.h"

Meme :: Meme()
{
	this->title = "Booooring";
	this->dankness = 0;
	this->hipsterQuotient = -.9999;
	this->mainstream = true;
}

Meme :: Meme(string title)
{
	this->title = title;
	this->dankness = title.length();
	this->hipsterQuotient = 3.14;
	this->mainstream = true;
}

string Meme :: getTitle()
{
	return title;
}

bool Meme :: isMainstream()
{
	return mainstream;
}

void Meme :: setDankness(int dank)
{
	this->dankness = dank;
}

void Meme :: setTitle(string title)
{
	this->title = title;
}

void Meme :: setHipsterQuotient(double quotient)
{
	this->hipsterQuotient = quotient;
}

void Meme :: setMainstream(bool isMain)
{
	this->mainstream = isMain;
}


