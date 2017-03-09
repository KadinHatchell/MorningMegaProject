/*
 * Timer.h
 *
 *  Created on: Feb 13, 2017
 *      Author: Kadin
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <time.h>

class Timer
{
private:
    //Data Members
    clock_t executionTime;
public:
    //Constructor
    Timer();
    //Methods
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
};

#endif /* TIMER_H_ */
