#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Event.h"
#include "Party.h"

using namespace std;

class Candidate1 : public Event{
private:
    string _canEve1;
public:
    string getCanEve1();
    void setCanEve1(const string& canEve1);
    void Candidate1Type(Party& party1, Party& party2, Party& party3);
};