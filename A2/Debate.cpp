#include "Debate.h"
string Debate::getDebateEve() {return _debateEve;}
void Debate::setDebateEve(const string& debateEve) {_debateEve = debateEve;}
// Implement the simulateData function for Debate class
void Debate::debateType(Party& party1, Party& party2, Party& party3) {
    int candidateIndex = Random(0, party1.getCandidates().size() - 1);
    double p1Effect = calculateInDebate(party1, candidateIndex);
    double p2Effect = calculateInDebate(party2, candidateIndex);
    double p3Effect = calculateInDebate(party3, candidateIndex);
    int turn = Random(0,3);
    if (turn <= p1Effect) {
        party1._candidates[candidateIndex].updatePopularity(party1.getManagementTeam().getEfficiency());
        cout << "Candidate " << candidateIndex<<" of " << party1.getName() << " has won the debate! The popularity will increase to " << party1.getCandidates().at(candidateIndex).getPopularity() << endl;
    } else if (turn <=sum(p1Effect, p2Effect)) {
        party2._candidates[candidateIndex].updatePopularity(party2.getManagementTeam().getEfficiency());
        cout << "Candidate " << candidateIndex<<" of " << party2.getName() << " has won the debate! The popularity will increase to " << party2.getCandidates().at(candidateIndex).getPopularity()<< endl;
    } else {
        party2._candidates[candidateIndex].updatePopularity(party3.getManagementTeam().getEfficiency());
        cout << "Candidate " << candidateIndex<<" of " << party3.getName() << " has won the debate! The popularity will increase to " << party2.getCandidates().at(candidateIndex).getPopularity() << endl;
    }
}