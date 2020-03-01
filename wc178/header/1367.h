#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class LinkedListinBinaryTree{
    ListNode* head;
    TreeNode* root;
public: 
    LinkedListinBinaryTree();
    ~LinkedListinBinaryTree(); 
    bool isSubPath(ListNode* head, TreeNode* root);
    void test();
};