#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class LongestSubstringWithoutRepeatingCharacters{
    string s;
public:
    LongestSubstringWithoutRepeatingCharacters();
    ~LongestSubstringWithoutRepeatingCharacters();
    int lengthOfLongestSubstring(string s);
    void test();
};