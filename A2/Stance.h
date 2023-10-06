#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>


using namespace std;

class Stance {
private:
    int _significance[5];
    int _approach[5];

public:
    Stance();
    int getSignificance(int index) const;
    void setSignificance(int index, int value);
    int getApproach(int index) const;
    void setApproach(int index, int value);
    void print() const;
};