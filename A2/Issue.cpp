#include "Issue.h"

Issue::Issue(string name, Stance stance) : _name(name), _stance(stance) {}
string Issue::getName() const { return _name; }
void Issue::setName(const string &name) { _name = name; }
Stance& Issue::getStance() {return _stance;}
void Issue::setStance(const Stance &stance) { _stance = stance; }
const Stance& Issue::getStance() const {return _stance;}