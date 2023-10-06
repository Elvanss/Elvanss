#include "Stance.h"

Stance::Stance() {
    for (int i = 0; i < 5; i++) { // Changed from 3 to NUM_ISSUES
        _significance[i] = Random(0,10);
        _approach[i] = Random(0,10);
    }
} 

int Stance::getSignificance(int index) const{return _significance[index];}

void Stance::setSignificance(int index, int value) {
    if (index >= 0 && index < 5) _significance[index] = value;
}

int Stance::getApproach(int index) const {
    if (index >= 0 && index < 5) {
        return _approach[index];
    }
    return -1;  
}

void Stance::setApproach(int index, int value) {
    if (index >= 0 && index < 5) _approach[index] = value;
}