//
// Created by Mark Billingsley on 5/24/21.
//

#include "StopWatch.h"
#include <chrono>

StopWatch::StopWatch() {
    _start = std::chrono::system_clock::now();
}

StopWatch::~StopWatch() = default;

void StopWatch::start() {
    _start = std::chrono::system_clock::now();
}

void StopWatch::stop() {
    _end = std::chrono::system_clock::now();
}

double StopWatch::milli() {
    auto diff = _end - _start;
    return std::chrono::duration<double, std::milli>(diff).count();
}

double StopWatch::second() {
    auto diff = _end - _start;
    return std::chrono::duration<double>(diff).count();
}
