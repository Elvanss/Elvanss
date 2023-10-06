#pragma once

#include "Simulation.h"
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

class ManagementTeam {
private:
    double _loyalty;
    double _efficiency;

public:
    ManagementTeam();
    double getLoyalty() const;
    void setLoyalty(double value);
    double getEfficiency() const;
    void setEfficiency(double value);
    // void print() const;
};