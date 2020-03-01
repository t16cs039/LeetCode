#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class HowManyNumbersAreSmallerThantheCurrentNumber{
    vector<int> nums;
public: 
    HowManyNumbersAreSmallerThantheCurrentNumber();
    ~HowManyNumbersAreSmallerThantheCurrentNumber(); 
    vector<int> smallerNumbersThanCurrent(vector<int>& nums);
    void test();
};