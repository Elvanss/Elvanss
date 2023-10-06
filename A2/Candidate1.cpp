#include "Candidate1.h"
#include <random>

string Candidate1::getCanEve1() {return _canEve1;}
void Candidate1::setCanEve1(const string& canEve1) {_canEve1 = canEve1;}
void Candidate1::Candidate1Type(Party& party1, Party& party2, Party& party3) {
    int candidateIndex = Random(0, party1.getCandidates().size() - 1);
    //call a temporary vector
    vector<Party*> partyList;
    partyList.push_back(&party1);
    partyList.push_back(&party2);
    partyList.push_back(&party3);
    for (int i =0; i< partyList.size(); i++) {
        int Coefficient = Random(0,1);
        if(Coefficient == 0) {
            partyList.at(i)->_candidates.at(candidateIndex).updatePopularity(Random(0, 20));
            cout << "Candidate " << candidateIndex<<" of " << partyList.at(i)->getName()<<" was increase to "<<partyList.at(i)->getCandidates().at(candidateIndex).getPopularity()<<endl;
        } else {
            partyList.at(i)->_candidates.at(candidateIndex).updatePopularity(Random(-10, 0));
            cout << "Candidate " << candidateIndex<<" of " << partyList.at(i)->getName()<<" was down to "<<partyList.at(i)->getCandidates().at(candidateIndex).getPopularity()<<endl;
        }
    }
}



int Random(int low, int high) {
    static std::default_random_engine e;
    std::uniform_int_distribution<int> dist(low, high);
    return dist(e);
}