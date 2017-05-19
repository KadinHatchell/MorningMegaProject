//
//  Timer.hpp
//  MegaProject
//
//  Created by Kadin on 3/27/17.
//  Copyright © 2017 Kadin. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

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

#endif /* Timer_hpp */
