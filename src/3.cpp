#include "./header/3.h"

LongestSubstringWithoutRepeatingCharacters::LongestSubstringWithoutRepeatingCharacters(){
    // s = "abcabcbb"; // 3
    // s = "bbbbb"; // 1
    // s = "pwwkew"; // 3
    // s = "dedf"; // 3
    // s = "tmmzuxt"; // 5
    // s = "ohvhjdml"; // 6
}

LongestSubstringWithoutRepeatingCharacters::~LongestSubstringWithoutRepeatingCharacters(){
}

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(string s){

    int max = 0;
    vector<char> before;
    vector<char> curr;

    int i = 0;

    while(i < s.length()){
        
        auto flag = find(curr.begin(), curr.end(), s.at(i));
        // cout<<i<<endl;
        if(flag == curr.end()){ // couldn't find it
            curr.push_back(s.at(i));
            i++;
        }
        else{ // could find it
            if(max < curr.size()){
                for(vector<char>::iterator itr = curr.end()-1; itr != curr.begin(); itr--){
                    if((*itr) == s.at(i)){break;}
                    else{
                        // cout<<"check chg "<<(*itr)<<endl;
                        i--;
                    }
                }

                max = curr.size();
                before.clear();
                before = curr;
                curr.clear();
                // cout<<"debug chg "<<i<<endl;
            }
            else{
                
                for(vector<char>::iterator itr = curr.end()-1; itr != curr.begin(); itr--){
                    if((*itr) == s.at(i)){break;}
                    else{
                        // cout<<"check re "<<(*itr)<<endl;
                        i--;
                    }
                }
                
                curr.clear();

                // cout<<"debug rem "<<i<<endl;
            }
        }
    }
    // cout<<"debug"<<endl;
    /*
    for(vector<char>::iterator itr = before.begin(); itr != before.end(); itr++){
        cout<<(*itr)<<" ";
    }
    cout<<endl;

    for(vector<char>::iterator itr = curr.begin(); itr != curr.end(); itr++){
        cout<<(*itr)<<" ";
    }
    cout<<endl;
    */
    if(max < curr.size()){
        max = curr.size();
        return max;
    }
    else{return max;}

}

void LongestSubstringWithoutRepeatingCharacters::test(){

    cout<<lengthOfLongestSubstring(s)<<endl;

}