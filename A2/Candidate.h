#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Stance.h"
#include "CampaignMember.h"

using namespace std;
class Candidate : public CampaignMember {
private:
    double _loyalty;
    Stance _stance;

public:
    Candidate();
    double getLoyalty() const;
    void setLoyalty(double value);
    const Stance& getStance() const;
    // void print() const;
};