#include "Candidate2.h"
#include <random>

string Candidate2::getCanEve2() {return _canEve2;}
void Candidate2::setCanEve2(const string& canEve2) {_canEve2 = canEve2;}
void Candidate2::Candidate2Type(Party& party1, Party& party2, Party& party3) {
    int candidateIndex = Random(0, party1.getCandidates().size() - 1);
    //call a temporary vector
    vector<Party*> partyList;
    partyList.push_back(&party1);
    partyList.push_back(&party2);
    partyList.push_back(&party3);
    for (int i =0; i< partyList.size(); i++) {
        int Coefficient = Random(0, partyList.at(i)->getCandidates().at(candidateIndex).getLoyalty());
        if(Coefficient - partyList.at(i)->getCandidates().at(candidateIndex).getLoyalty() <0) {
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
