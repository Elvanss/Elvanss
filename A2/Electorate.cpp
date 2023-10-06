#include "Electorate.h"

Electorate::Electorate(int division) : divisionNumber(division) {}
Electorate::~Electorate() {}
int Electorate::getDivisionNumber() const {return divisionNumber;}
vector<Issue>& Electorate::getIssues() {return issues;}
const vector<Issue>& Electorate::getIssues() const {return issues;}
void Electorate::addIssue(const Issue &issue) {issues.push_back(issue);}