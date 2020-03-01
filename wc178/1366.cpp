#include "./header/1366.h"

RankTeamsbyVotes::RankTeamsbyVotes(){
    votes = {"ABC","ACB","ABC","ACB","ACB"};
    // votes = {"WXYZ","XYZW"};
    // votes = {"ZMNAGUEDSJYLBOPHRQICWFXTVK"};
    // votes = {"BCA","CAB","CBA","ABC","ACB","BAC"};
    // votes = {"M","M","M","M"};
}

RankTeamsbyVotes::~RankTeamsbyVotes(){}

string RankTeamsbyVotes::rankTeams(vector<string>& votes){
    if(votes.size() == 1){ return votes[0]; }

    int m = votes.size();
    string v = votes[0];
    map<char, map<int, int>> f;
    for (auto s : votes)
    {
        for (int i = 0; i < s.size(); ++ i){
            f[s[i]][i] ++;
            cout<<s[i]<<" "<<i<<" "<<f[s[i]][i]<<endl;
        }
    }

    sort(v.begin(), v.end(), [&](char a, char b) -> bool
    {
        for (int i = 0; i < v.size(); ++ i)
        {
            if (f[a][i] > f[b][i]) return 1;
            if (f[a][i] < f[b][i]) return 0;
        }
        return a < b;
    });
    
    return v;
}

void RankTeamsbyVotes::test(){ cout<<rankTeams(votes)<<endl; }