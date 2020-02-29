#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class LongestPalindromicSubstring{
    string s;
public:
    LongestPalindromicSubstring();
    ~LongestPalindromicSubstring();
    string BruteForce(string s);
    string Manacher(string s);
    string longestPalindrome(string s);
    void test();
};