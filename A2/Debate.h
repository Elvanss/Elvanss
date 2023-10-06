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

class Debate: public Event {
private:
    string _debateEve;
public:
    string getDebateEve();
    void setDebateEve(const string& debateEve);
    void debateType(Party& party1, Party& party2, Party& party3);
};