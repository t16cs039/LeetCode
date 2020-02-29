#include "./header/sample.h"

AddTwoNumbers::AddTwoNumbers(){
    l1 = NULL;
    l2 = NULL;
}

AddTwoNumbers::~AddTwoNumbers(){
    delete[] l1;
    delete[] l2;
}

ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2){
    while(l1 != NULL){
        cout<<l1->val<<" ";
        l1 = l1->next;
    }
    cout<<endl;
    while(l2 != NULL){
        cout<<l2->val<<" ";
        l2 = l2->next;
    }
    cout<<endl;
}

void AddTwoNumbers::insert(int x, ListNode* & p){
    if(p == NULL){ p = new ListNode(x); }
    else{ insert(x, p->next); }
}

void AddTwoNumbers::test(){
    int a[] = {2, 4, 3};
    int b[] = {5, 6, 4};
    int A_SIZE = sizeof(a) / sizeof(a[0]);
    int B_SIZE = sizeof(b) / sizeof(b[0]);
    int i = 0;
    int j = 0;

    while(i < A_SIZE){
        insert(a[i], l1);
        i++;
    }

    while(j < A_SIZE){
        insert(b[j], l2);
        j++;
    }

    ListNode* l = addTwoNumbers(l1, l2);
}