#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class MinimumCosttoMakeatLeastOneValidPathinaGrid{
    vector<vector<int>> grid;
public: 
    MinimumCosttoMakeatLeastOneValidPathinaGrid();
    ~MinimumCosttoMakeatLeastOneValidPathinaGrid(); 
    int minCost(vector<vector<int>>& grid);
    void test();
};