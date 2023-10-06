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

class Issue2 {
private:
    string _issueEve2;

public:
    string getIssueEve2() ;
    void setIssueEve2(const string& issueEve2);
    void simulateData(Electorate& electoralDiv);
};
