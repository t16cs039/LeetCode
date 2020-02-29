#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class MedianOfTwoSortedArrays{
    vector<int> nums1;
    vector<int> nums2;
public:
    MedianOfTwoSortedArrays();
    ~MedianOfTwoSortedArrays();
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
    void test();
};