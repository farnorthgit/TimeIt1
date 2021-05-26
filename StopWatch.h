//
// Created by Mark Billingsley on 5/24/21.
//

#include <chrono>

#ifndef TIMEIT1_STOPWATCH_H
#define TIMEIT1_STOPWATCH_H

class StopWatch {
public:
    StopWatch();
    ~StopWatch();
    void start();
    void stop();
    double milli();
    double second();
private:
    std::chrono::time_point<std::chrono::system_clock> _start;
    std::chrono::time_point<std::chrono::system_clock> _end;
};

#endif //TIMEIT1_STOPWATCH_H
