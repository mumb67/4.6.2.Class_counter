#include "Counter.h"

Counter::Counter(int _enteredNum) { this->counterNum = _enteredNum; }
Counter::Counter() {}
void Counter::addCounter() { counterNum++; }
void Counter::disCounter() { this->counterNum--; }
void Counter::outCounter() { std::cout << this->counterNum << std::endl; }