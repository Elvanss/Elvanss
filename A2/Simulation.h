#ifndef SIMULATION_H
#define SIMULATION_H

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "Party.h"
#include "Electorate.h"
#include "Event.h"
#include "Issue.h"
#include "Stance.h"
#include "Issue1.h"
#include "Issue2.h"
#include "Candidate1.h"
#include "Candidate2.h"
#include "Leader1.h"
#include "Leader2.h"
#include "Debate.h"

using namespace std;

extern vector<Party> parties;
extern vector<Electorate> electorates;
double calculateInDebate(const Party& party, int candidateIndex);
double sum (int val1, int val2);
double computeVotingScore(const Candidate& candidate, const Electorate& electorate, const Leader& leader);
void decideWinner();
void createObj(int electorateNumber);
void showInfo(int electorateNumber, int day);

#endif // SIMULATION_H