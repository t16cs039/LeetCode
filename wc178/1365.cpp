#include "./header/1365.h"

HowManyNumbersAreSmallerThantheCurrentNumber::HowManyNumbersAreSmallerThantheCurrentNumber(){
    // nums = {8, 1, 2, 2, 3};
    // nums = {6, 5, 4, 8};
    nums = {7, 7, 7, 7};
}

HowManyNumbersAreSmallerThantheCurrentNumber::~HowManyNumbersAreSmallerThantheCurrentNumber(){}

vector<int> HowManyNumbersAreSmallerThantheCurrentNumber::smallerNumbersThanCurrent(vector<int>& nums){
    vector<int> ans;
    
    for(vector<int>::iterator i = nums.begin(); i != nums.end(); i++){
        int smaller = 0;
        
        for(vector<int>::iterator j = nums.begin(); j != nums.end(); j++){
            if((*i) > (*j)){ smaller++; }
        }
        ans.push_back(smaller);
    }
    return ans;
}

void HowManyNumbersAreSmallerThantheCurrentNumber::test(){

    vector<int> l = smallerNumbersThanCurrent(nums);

    for(vector<int>::iterator itr = l.begin(); itr != l.end(); itr++){ cout<<(*itr)<<" "; }
    cout<<endl;

}