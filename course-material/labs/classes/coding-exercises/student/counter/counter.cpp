#include "counter.h"

Counter::Counter() : Counter(0){}

Counter::Counter(unsigned value) : value(value){}

unsigned Counter::getValue() const {
	return this->value;
}

void Counter::setValue(unsigned value) {
	this->value = value;
}

void Counter::increment() {
	++this->value;
}

void Counter::reset() {
	this->value = 0;
}