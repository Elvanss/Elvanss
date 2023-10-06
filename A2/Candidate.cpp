#include "Candidate.h"

Candidate::Candidate() : CampaignMember(), _stance(Stance()) { 
        _loyalty = Random(0, 100);
    }
double Candidate::getLoyalty() const { return _loyalty; }
void Candidate::setLoyalty(double value) { _loyalty = value; }
const Stance& Candidate::getStance() const { return _stance; }