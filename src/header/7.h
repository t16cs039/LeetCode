#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

class ReverseInteger{
    int x;
public:
    ReverseInteger();
    ~ReverseInteger();
    int reverse(int x);
    void test();
};