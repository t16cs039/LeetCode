#pragma once

#include <iostream>
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class AddTwoNumbers{
public:
    ListNode* l1;
    ListNode* l2;
    
    AddTwoNumbers();
    ~AddTwoNumbers();
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    void test();
};