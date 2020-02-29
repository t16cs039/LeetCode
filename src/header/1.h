#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class TwoSum{
public:
    vector<int> nums;
    int target;
    
    TwoSum();
    ~TwoSum();
    vector<int> BruteForce(vector<int>& nums, int target);
    vector<int> OnepassHashTable(vector<int>& nums, int target);
    vector<int> twoSum(vector<int>& nums, int target);
    void test();
};