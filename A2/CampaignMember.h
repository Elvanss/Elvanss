#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Issue.h"
#include "Simulation.h"


using namespace std;

class CampaignMember {
private:
    double _popularity;
    vector<Issue> stances;
public:
    CampaignMember();
    double getPopularity() const; // Return the popularity value
    void setPopularity(double value);
    void updatePopularity(double delta);
};