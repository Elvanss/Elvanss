#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Stance.h"

using namespace std;

class Issue {
    enum issueType {ISSUE_1, ISSUE_2, ISSUE_3, ISSUE_4, ISSUE_5};
private:
    string _name;
    Stance _stance;


public:
    Issue(string name, Stance stance);
    string getName() const;
    void setName(const string &name);
    Stance& getStance();
    void setStance(const Stance &stance);
    const Stance& getStance() const;
};