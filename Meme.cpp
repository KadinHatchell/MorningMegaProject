#include "Meme.h"

Meme :: Meme()
{
	this->title = "Booooring";
	this->dankness = 0;
	this->hisperQuotient = -.9999;
	this->mainstream = true;
}

Meme :: Meme(string title)
{
	this->title = title;


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


