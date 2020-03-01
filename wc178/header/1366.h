#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
using namespace std;

class RankTeamsbyVotes{
    vector<string> votes;
public: 
    RankTeamsbyVotes();
    ~RankTeamsbyVotes(); 
    string rankTeams(vector<string>& votes);
    void test();
};