#include "Leader1.h"

string Leader1::getLeaderEve1() {return _leaderEve1;}
void Leader1::setLeaderEve1(const string& leaderEve1) {_leaderEve1 = leaderEve1;}
void Leader1::Leader1Type(Party& party1, Party& party2, Party& party3) {
    // Call a temporary vector
    vector<Party*> partyList;
    partyList.push_back(&party1);
    partyList.push_back(&party2);
    partyList.push_back(&party3);
    int random = Random(0, 1);
    for (int i = 0; i < partyList.size(); i++) {
        if (random == 0) {
            Leader& leader = partyList.at(i)->getLeader();
            leader.setPopularity(leader.getPopularity() + Random(0, 10));
            cout << "The popularity of the leader in " << partyList.at(i)->getName() << " has been increased to " << leader.getPopularity() << endl;
        } else {
            Leader& leader = partyList.at(i)->getLeader();
            leader.setPopularity(leader.getPopularity() - Random(0,10));
            cout << "The popularity of the leader in " << partyList.at(i)->getName() << " has been increased to " << leader.getPopularity() << endl;
        }
    }
}