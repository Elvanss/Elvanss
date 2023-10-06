#include "Party.h"

//Party class components
Party::Party(string name, Leader leader, vector<Candidate> candidates, ManagementTeam team)
    : _name(name), _leader(leader), _candidates(candidates), _team(team) {}
string Party::getName() const { return _name; }
void Party::setName(const string &name) { _name = name; }
// Leader Party::getLeader() const { return _leader; 
Leader& Party::getLeader() {return _leader;}
void Party::setLeader(const Leader &leader) { _leader = leader; }
const vector<Candidate>& Party::getCandidates() const {return _candidates;}
void Party::setCandidates(const vector<Candidate>& candidates) {_candidates = candidates;}
ManagementTeam Party::getManagementTeam() const {return _team;}
void Party::setManagementTeam(const ManagementTeam& team) {_team = team;}
const vector<Issue>& Party::getIssues() const {return _issues;}
void Party::setIssues(const vector<Issue>& issues) {_issues = issues;}
void Party::addIssue(const Issue& issue) {_issues.push_back(issue);}