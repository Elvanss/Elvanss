#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Electorate.h"

using namespace std;

class Issue1 {
private:
    string _issueEve1; 

public:
    // Getter for _issueEve1
    string getIssueEve1() ;
    // Setter for _issueEve1
    void setIssueEve1(const string& issueEve1);
    void simulateData(Electorate& electoralDiv);
};
