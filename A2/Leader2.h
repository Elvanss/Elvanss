#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Party.h"
#include "Simulation.h"

using namespace std;

class Leader2 : public Event{
private:
    string _leaderEve2; 

public:
    string getLeaderEve2();
    void setLeaderEve2(const string& leaderEve2);
    void Leader2Type(Party& party1, Party& party2, Party& party3);
};
