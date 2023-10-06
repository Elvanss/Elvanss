#include "Issue1.h"

string Issue1::getIssueEve1() {return _issueEve1;}
void Issue1::setIssueEve1(const string& issueEve1) {_issueEve1 = issueEve1;
}

void Issue1::simulateData(Electorate& electoralDiv) {
    int iStanceIndex = Random(0,4);
    Stance& currentStance = electoralDiv.getIssues().at(iStanceIndex).getStance();
    int newSignificance = currentStance.getSignificance(iStanceIndex) + Random(0,10);
    currentStance.setSignificance(iStanceIndex, newSignificance);
    cout << " The " << electoralDiv.getIssues().at(iStanceIndex).getName() << " will be changed! The significance will be increased to " << currentStance.getApproach(iStanceIndex) << endl;
}
