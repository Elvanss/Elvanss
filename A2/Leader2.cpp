#include "Leader2.h"

string Leader2::getLeaderEve2() {return _leaderEve2;}
void Leader2::setLeaderEve2(const string& leaderEve2) {_leaderEve2 = leaderEve2;}
void Leader2::Leader2Type(Party& party1, Party& party2, Party& party3) {
    // Call a temporary vector
    vector<Party*> partyList;
    partyList.push_back(&party1);
    partyList.push_back(&party2);
    partyList.push_back(&party3);
    
    for (int i = 0; i < partyList.size(); i++) {
        int random = Random(0, partyList.at(i)->getLeader().getInfluence());
        if (random == 0) {
            Leader& leader = partyList.at(i)->getLeader();
            leader.setPopularity(leader.getPopularity() + Random(0, 10));
            cout << "The popularity of the leader in " << partyList.at(i)->getName() << " has been increased to " << leader.getPopularity() <<endl;
        } else {
            Leader& leader = partyList.at(i)->getLeader();
            leader.setPopularity(leader.getPopularity() - Random(0,10));
            cout << "The popularity of the leader in " << partyList.at(i)->getName() << " has been increased to " << leader.getPopularity() << endl;
        }
    }
}

