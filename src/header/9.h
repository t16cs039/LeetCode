#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

#include <unordered_map>
#include <unordered_set>

using namespace std;

class PalindromeNumber{
    int x;
public:
    PalindromeNumber();
    ~PalindromeNumber();
    bool isPalindrome(int x);
    void test();
};