#ifndef PARTY_H
#define PARTY_H

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Leader.h"
#include "Candidate.h"
#include "ManagerialTeam.h"

using namespace std;

class Party {
private:
    string _name;
    Leader _leader;
    ManagementTeam _team; 
    vector<Issue> _issues; 
    Stance _partyStance;
public: 
    Party(string name, Leader leader, vector<Candidate> candidates, ManagementTeam team);
    string getName() const;
    void setName(const string &name);
    Leader& getLeader();
    void setLeader(const Leader &leader);
    const vector<Candidate>& getCandidates() const;
    void setCandidates(const vector<Candidate>& candidates);
    ManagementTeam getManagementTeam() const;
    void setManagementTeam(const ManagementTeam& team);
    const vector<Issue>& getIssues() const; 
    void setIssues(const vector<Issue>& issues);
    void addIssue(const Issue& issue);
    vector<Candidate> _candidates;
    // void print() const;
};
#endif // PARTY_H