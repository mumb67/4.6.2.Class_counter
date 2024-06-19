#pragma once
#include <iostream>
class Counter {
private:
    int counterNum = { 1 };
public:
    Counter(int _enteredNum);
    Counter();
    void addCounter();
    void disCounter();
    void outCounter();
};