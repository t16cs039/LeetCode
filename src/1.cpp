#include "./header/1.h"

TwoSum::TwoSum(){

    nums = {2, 7, 11, 15};
    
    target = 9;

}

TwoSum::~TwoSum(){

}

vector<int> TwoSum::BruteForce(vector<int>& nums, int target){

    int i = 0;
    int j = 1;
    int size = nums.size();
    vector<int> ans;

    while(i < size){

        if((nums[i] + nums[i + j]) == target){
            ans.push_back(i);
            ans.push_back((i + j));
            
            return ans;
        }

        if(j == (size - i - 1)){
            i++;
            j = 1;
        }
        else{
            j++;
        }
        
    }
    
    return {};

}

vector<int> TwoSum::OnepassHashTable(vector<int>& nums, int target){

    unordered_map<int, int> hash_table{{nums[0], 0}};
    vector<int> ans;

    for(int i = 1; i < nums.size(); i++){
        
        int temp = target - nums[i];
        
        if(hash_table.count(temp) != 0){
            ans.push_back(hash_table.find(temp)->second);
            ans.push_back(i);

            return ans;
        }
        else{
            hash_table.insert(pair<int, int>(nums[i], i)); 
        }
      
    }

    return {};
}

vector<int> TwoSum::twoSum(vector<int>& nums, int target){
    
    // return BruteForce(nums, target);
    return OnepassHashTable(nums, target);
}

void TwoSum::test(){
    
    vector<int> re = twoSum(nums, target);
    
    if(re.size() != 0){
        for(vector<int>::iterator itr = re.begin(); itr != re.end(); itr++){
            cout<<*(itr)<<" ";
        }
        cout<<endl;
    }
}