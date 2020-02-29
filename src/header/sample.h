#pragma once

#include<iostream>
#include<vector>
#include<new>
#include<algorithm>
using namespace std;

class ListNode{
    int val;
    ListNode* next;
public:
    ListNode(int x): val(x), next(NULL) {};

    friend class AddTwoNumbers;
};

class AddTwoNumbers{
    ListNode* l1;
    ListNode* l2;
public:
    AddTwoNumbers();
    ~AddTwoNumbers();
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    void insert(int x, ListNode* & p);
    void test();
};
