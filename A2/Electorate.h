#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Issue.h"

using namespace std;

class Electorate {
private:
    int divisionNumber;
    std::vector<Issue> issues;
    

public:
    Electorate(int division);
    ~Electorate();
    int getDivisionNumber() const;
    vector<Issue>& getIssues();
    const vector<Issue>& getIssues() const;
    void addIssue(const Issue &issue);
};