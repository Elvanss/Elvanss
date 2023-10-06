#include "ManagerialTeam.h"

ManagementTeam::ManagementTeam() {
    _loyalty = Random(0,100);
    _efficiency = Random(0,100);
}
double ManagementTeam::getLoyalty() const { return _loyalty; }
void ManagementTeam::setLoyalty(double value) { _loyalty = value; }
double ManagementTeam::getEfficiency() const { return _efficiency; }
void ManagementTeam::setEfficiency(double value) { _efficiency = value; }

int Random(int low, int high) {
    static std::default_random_engine e;
    std::uniform_int_distribution<int> dist(low, high);
    return dist(e);
}