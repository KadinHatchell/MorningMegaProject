/*
 * Timer.cpp
 *
 *  Created on: Feb 13, 2017
 *      Author: Kadin
 */

#include "Timer.h"
#include <iostream>

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    executionTime = clock() - executionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "The execution time is: " << executionTime << endl;
    cout << "In human time is is: " << double (executionTime)/CLOCKS_PER_SEC << " seconds" << endl;
}

long Timer :: getExecutionTimeInMicroseconds()
{
    return executionTime;
}
