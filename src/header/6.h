#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class ZigZagConversion{
    string s;
    int numRows;
public:
    ZigZagConversion();
    ~ZigZagConversion();
    string mine(string s, int numRows);
    string VisitbyRow(string s, int numRows);
    string SortbyRow(string s, int numRows);
    string convert(string s, int numRows);
    void test();
};