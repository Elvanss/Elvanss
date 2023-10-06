#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Party.h"
#include "Event.h"

using namespace std;

class Leader1 : public Event{
private:
    string _leaderEve1; 

public:
    string getLeaderEve1();
    void setLeaderEve1(const string& leaderEve1);
    void Leader1Type(Party& party1, Party& party2, Party& party3);
};