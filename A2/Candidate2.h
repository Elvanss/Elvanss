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
#include "Simulation.h"

using namespace std;

class Candidate2 : public Event{
private:
    string _canEve2;
public:
    string getCanEve2();
    void setCanEve2(const string& canEve2);
    void Candidate2Type(Party& party1, Party& party2, Party& party3);
};