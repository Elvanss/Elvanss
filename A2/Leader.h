#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "CampaignMember.h"

using namespace std;

class Leader : public CampaignMember {
private:
    double _influence;

public:
    Leader();
    double getInfluence() const;
    void setInfluence(double value);
    // void print() const;
};