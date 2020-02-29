#include "./header/2.h"

AddTwoNumbers::AddTwoNumbers(){

}

AddTwoNumbers::~AddTwoNumbers(){

    //delete[] l1;
    //delete[] l2;

}

ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2){

    int degit = 0;
    int num = (l1->val + l2->val + degit);

    ListNode* ans = new ListNode(num % 10);
    ListNode* curr = ans;
    
    if(num > 9){
        degit++;
    }

    l1 = l1->next;
    l2 = l2->next;
    
    while(l1 != NULL or l2 != NULL or degit != 0){
        // cout<<"first"<<endl;
        if(l1 != NULL && l2 != NULL){
            // cout<<"both ";
            num = (l1->val + l2->val + degit);
            degit = 0;
            if(num > 9){degit++;}

            l1 = l1->next;
            l2 = l2->next;
            
        }
        else if(l1 != NULL){
            // cout<<"l1 ";
            num = (l1->val + degit);
            degit = 0;
            if(num > 9){degit++;}

            l1 = l1->next;
        }
        else if(l2 != NULL){
            // cout<<"l2 ";
            num = (l2->val + degit);
            degit = 0;
            if(num > 9){degit++;}
            
            l2 = l2->next;
        }
        else{
            // cout<<"Nothing ";
            num = (degit);
            degit = 0;
            if(num > 9){degit++;}
        }
        // cout<<"push "<<num<<" "<<degit<<endl;
        ListNode* temp = new ListNode((num % 10));
        curr->next = temp;
        curr = temp;
        
    }
    // cout<<"de6ug"<<endl;
    return ans;
}

void AddTwoNumbers::test(){

    /*
    int data1[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    int data2[] = {5, 6, 4};
    */
    
    int data1[] = {2, 4, 3};
    int data2[] = {5, 6, 4};
    
    /*
    int data1[] = {5};
    int data2[] = {5};
    */
    ListNode* l1 = new ListNode(data1[0]);
    ListNode* curr1 = l1;
    ListNode* l2 = new ListNode(data2[0]);
    ListNode* curr2 = l2;

    for(int i = 1; i < (sizeof(data1) / 4); i++){
        ListNode* temp1 = new ListNode(data1[i]);
        curr1->next = temp1;
        curr1 = temp1;
        //l1->next = temp1;
        //l1 = l1->next;
    }

    for(int i = 1; i < (sizeof(data2) / 4); i++){
        ListNode* temp2 = new ListNode(data2[i]);
        curr2->next = temp2;
        curr2 = temp2;
        //l2->next = temp2;
        //l2 = l2->next;
    }

    ListNode* l = addTwoNumbers(l1, l2);

    cout<<"result ";
    while(l != NULL){
        cout<<l->val<<" ";
        l = l->next;
    }
    cout<<endl;

}