#include "Issue2.h"

string Issue2::getIssueEve2() {return _issueEve2;}

void Issue2::setIssueEve2(const string& issueEve2) {_issueEve2 = issueEve2;}

void Issue2::simulateData(Electorate& electoralDiv) {
    int iStanceIndex = Random(0,4);
    Stance& currentStance = electoralDiv.getIssues().at(iStanceIndex).getStance();
    int newApproach = currentStance.getApproach(iStanceIndex) + Random(0,10);
    currentStance.setApproach(iStanceIndex, newApproach);
     cout << " The " << electoralDiv.getIssues().at(iStanceIndex).getName() << " will be changed! Its approach will be increased to " << currentStance.getApproach(iStanceIndex) << endl;
}
