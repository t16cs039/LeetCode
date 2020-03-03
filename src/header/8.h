#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

#include <unordered_map>
#include <unordered_set>

using namespace std;

class StringtoInteger_atoi{
    string str;
public:
    StringtoInteger_atoi();
    ~StringtoInteger_atoi();
    int myAtoi(string str);
    void test();
};