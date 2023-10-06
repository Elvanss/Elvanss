#include "Simulation.h"

//Initialize the vector for parties, electorate and event
vector<Party> parties;
vector<Electorate> electorates;

//Random Engine
int Random(int lower, int upper) {
    static default_random_engine generator(random_device{}()); 
    uniform_int_distribution<int> distribution(lower, upper);
    return distribution(generator);
}

double sum (int val1, int val2) {return val1 + val2;}
void createObj(int electorateNum) {
    parties.clear();
    electorates.clear();

    //  list of issues (without specific stances)
    vector<Issue> issueList = {
        Issue("Climate Change", Stance()),
        Issue("Water Pollution", Stance()),
        Issue("Over Population", Stance()),
        Issue("equality", Stance()),
        Issue("Starvation", Stance())
    };

    // For Party 1
    Leader leader1;
    vector<Candidate> candidates1;
    for (int i = 0; i < electorateNum; ++i) {  // 10 candidates for each party
        Candidate candidate;
        candidates1.push_back(candidate);
    }
    ManagementTeam team1;
    Party party1("Libertarian Party", leader1, candidates1, team1);
    for (Issue& issue : issueList) {
        party1.addIssue(Issue(issue.getName(), Stance()));
    }
    parties.push_back(party1);

    // For Party 2
    Leader leader2;
    vector<Candidate> candidates2;
    for (int i = 0; i < electorateNum; ++i) {
        Candidate candidate;
        candidates2.push_back(candidate);
    }
    ManagementTeam team2;
    Party party2("Green Party", leader2, candidates2, team2);
    for (Issue& issue : issueList) {
        party2.addIssue(Issue(issue.getName(), Stance()));
    }
    parties.push_back(party2);

    // For Party 3
    Leader leader3;
    vector<Candidate> candidates3;
    for (int i = 0; i < electorateNum; ++i) {
        Candidate candidate;
        candidates3.push_back(candidate);
    }

    ManagementTeam team3;
    Party party3("Constitution Party", leader3, candidates3, team3);
    for (Issue& issue : issueList) {
        party3.addIssue(Issue(issue.getName(), Stance()));
    }
    parties.push_back(party3);

    for (int i = 0; i < electorateNum; i++) {  
        Electorate electorate(i + 1);  
        for (Issue& issue : issueList) {
            electorate.addIssue(Issue(issue.getName(), Stance()));
        }
        electorates.push_back(electorate);
    }
    
}

void showInfo(int electorateNumber, int day) {
    createObj(electorateNumber);
cout<<"\n--------------------------------Initialize the Parties, Issues, and Divisions-------------------------------------\n"<<endl;
    // Display Party Information
    for (Party &party : parties) { // Change const Party to Party
        cout << "Political party name: " << party.getName() << "\n";
        Leader leader = party.getLeader(); 
        cout << "Leader: popularity: " << leader.getPopularity() << ", Influence: " << leader.getInfluence() << "\n";
        cout << "Candidate:\n";
        for (const Candidate &candidate : party.getCandidates()) {
            cout << "   Popularity: " << candidate.getPopularity() << ", Skill: " << candidate.getLoyalty() << "\n";
        }
        ManagementTeam team = party.getManagementTeam();
        cout << "Campaign team: efficiency: " << team.getEfficiency() << "\n";
        cout << "Stances:\n";
        for (const Issue &issue : party.getIssues()) {
            Stance stance = issue.getStance();
            cout << "   Issue: " << issue.getName() << ", Significance: " << stance.getSignificance(0) << ", Approach: " << stance.getApproach(0) << "\n";
        }
        cout << "\n";
    }


    // Display Electorate Details
    for (const Electorate &electorate : electorates) {
        cout << "Division number: " << electorate.getDivisionNumber() << "\n";
        for (const Issue &issue : electorate.getIssues()) {
            Stance stance = issue.getStance();
            cout << "   Issue: " << issue.getName() << ", Significance: " << stance.getSignificance(0) << ", Approach: " << stance.getApproach(0) << "\n";
        }
        cout << "\n";
    }

   for (int i = 0; i < day; i++) {
    cout << "------------------------------------------------------------\n";
    cout << "Simulation for Day: " << (i + 1) << "\n";
    cout << "------------------------------------------------------------\n";

    for (Electorate& e : electorates) {
        cout << "Division: " << e.getDivisionNumber() << "\n";
        
        int Chance = Random(0, 1);
        if (Chance == 1) {
            int eventChance = Random(1, 4);

            if (eventChance == 1) {
                Debate debate;
                debate.debateType(parties[0], parties[1], parties[2]); // Fix here
            } else if (eventChance == 2) {
                int smallEventChance = Random(0, 1);
                if (smallEventChance == 0) {
                    Candidate1 can1;
                    can1.Candidate1Type(parties[0], parties[1], parties[2]); // Fix here
                } else {
                    Candidate2 can2;
                    can2.Candidate2Type(parties[0], parties[1], parties[2]); // Fix here
                }
            } else if (eventChance == 3) {
                int smallEventChance = Random(0, 1);
                if (smallEventChance == 0) {
                    Leader1 leader1;
                    leader1.Leader1Type(parties[0], parties[1], parties[2]); // Fix here
                } else {
                    Leader2 leader2;
                    leader2.Leader2Type(parties[0], parties[1], parties[2]); // Fix here
                }
            } else {
                int smallEventChance = Random(0, 1);
                if (smallEventChance == 0) {
                    Issue1 i1;
                    i1.simulateData(e);
                } else {
                    Issue2 i2;
                    i2.simulateData(e);
                }
            }
            cout << "\n";
        } else {
            cout << "No event for division " << e.getDivisionNumber() << " on Day " << (i + 1) << ".\n\n";
        }
    }
    }
    cout<<"\n--------------------------------After Simulation-------------------------------------\n"<<endl;
    for (Party &party : parties) {
        cout << "Political party name: " << party.getName() << "\n";
        Leader leader = party.getLeader();
        cout << "Leader: popularity: " << leader.getPopularity() << ", Influence: " << leader.getInfluence() << "\n";
        cout << "Candidate:\n";
        for (const Candidate &candidate : party.getCandidates()) {
            cout << "   Popularity: " << candidate.getPopularity() << ", Skill: " << candidate.getLoyalty() << "\n";
        }
        ManagementTeam team = party.getManagementTeam();
        cout << "Campaign team: efficiency: " << team.getEfficiency() << "\n";
        cout << "Stances:\n";
        for (const Issue &issue : party.getIssues()) {
            Stance stance = issue.getStance();
            cout << "   Issue: " << issue.getName() << ", Significance: " << stance.getSignificance(0) << ", Approach: " << stance.getApproach(0) << "\n";
        }
        cout << "\n";
    }

    // Display Electorate Information
    cout << "Electorate Information:\n";
    for (const Electorate &electorate : electorates) {
        cout << "Division number: " << electorate.getDivisionNumber() << "\n";
        for (const Issue &issue : electorate.getIssues()) {
            Stance stance = issue.getStance();
            cout << "   Issue: " << issue.getName() << ", Significance: " << stance.getSignificance(0) << ", Approach: " << stance.getApproach(0) << "\n";
        }
        cout << "\n";
}
//get the winner:
    decideWinner();
}

/* External functions */
double calculateInDebate(const Party& party, int candidateIndex) {
    return party.getCandidates()[candidateIndex].getPopularity() + party.getManagementTeam().getEfficiency();
}

double computeVotingScore(const Candidate& candidate, const Electorate& electorate, const Leader& leader) {
    double euclideanDistance = 0;
    double avgDistance;

    for (int i = 0; i < 5; i++) {
        double significanceDiff = candidate.getStance().getSignificance(i) - electorate.getIssues()[i].getStance().getSignificance(i);
        double approachDiff = candidate.getStance().getApproach(i) - electorate.getIssues()[i].getStance().getApproach(i);

        euclideanDistance += sqrt(pow(significanceDiff, 2) + pow(approachDiff, 2));
    }

    // Average stance Euclidean distance
    avgDistance = euclideanDistance / 5;

    // Assuming maxDistance is the highest possible average distance a candidate can have
    double maxDistance = sqrt(pow(10, 2) + pow(10, 2));  
    double normalizedDistance = 1 - (avgDistance / maxDistance);  // Closer to 1 is better

    // Factor in the average stance distance (making it the major factor), candidate popularity, and leader popularity.
    // The multipliers 0.6, 0.3, and 0.1 can be adjusted accordingly.
    return (0.6 * normalizedDistance * 100) + (0.3 * candidate.getPopularity()) + (0.1 * leader.getPopularity());
}

void decideWinner() {
    // Initialize vectors to track party names and their respective wins.
    vector<string> partyNames;
    vector<int> winsCount(parties.size(), 0);

    // Populate partyNames vector.
    for (Party& p : parties) {
        partyNames.push_back(p.getName());
    }

    for (Electorate& e : electorates) {
        // Use separate vectors for party scores.
        vector<double> partyScores;

        for (Party& p : parties) {
            // Assuming a representative candidate from each party for each electorate.
            Candidate repCandidate = p.getCandidates()[e.getDivisionNumber() - 1];
            double score = computeVotingScore(repCandidate, e, p.getLeader());

            partyScores.push_back(score);
        }

        // Find the index of the max score.
        double maxScore = partyScores[0];
        int maxIndex = 0;
        for (int i = 1; i < partyScores.size(); i++) {
            if (partyScores[i] > maxScore) {
                maxScore = partyScores[i];
                maxIndex = i;
            }
        }

        // Update the wins count for the winning party.
        winsCount[maxIndex]++;

        // Display the winner for the division.
        cout << "In division " << e.getDivisionNumber() << ", the winner is " << partyNames[maxIndex] << " with a score is " << maxScore << endl;
    }

    // Display the number of wins for each party.
    cout << "\n-------------------------------- Party Wins Summary --------------------------------\n";
    for (int i = 0; i < partyNames.size(); i++) {
        cout << partyNames[i] << " has won " << winsCount[i] << " divisions.\n";
    }

    // Determine the overall winner.
    int maxWins = *max_element(winsCount.begin(), winsCount.end());
    int indexOfMaxWins = distance(winsCount.begin(), find(winsCount.begin(), winsCount.end(), maxWins));

    // Check if the overall winner has won more than 50% of the divisions.
    if (maxWins > electorates.size() / 2) {
        cout << "\nThe overall winner is " << partyNames[indexOfMaxWins] << ". They will form the government.\n";
    } else {
        cout << "\nNo party has won more than 50% of the divisions. It's a hung parliament.\n";
    }
}

//-----------------------------------------------------------------------------------------------------