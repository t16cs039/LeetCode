#include "./header/8.h"

StringtoInteger_atoi::StringtoInteger_atoi(){
    str = "20000000000000000000";
}

StringtoInteger_atoi::~StringtoInteger_atoi(){}

int StringtoInteger_atoi::myAtoi(string str){
    if(str.size() == 0){ return 0; }

    unordered_set<char> num{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    bool start = false;
    int s_num = 0;
    long long int ans = 0;
    int length = 0;

    for(int i = 0; i < str.size(); i++){
        if(start){
            if(num.count(str.at(i)) != 0){ ans = (ans * 10) + (long long int)(str.at(i) - '0'); length++;}
            else{ break; }
            if(str.at(i) == '0' && ans < 1){ length--; }
        }
        else{
            if(num.count(str.at(i)) != 0){ 
                ans = (ans * 10) + (long long int)(str.at(i) - '0'); 
                start = !start;
                s_num = i;
                length++;
            }
            else if(str.at(i) == '+' || str.at(i) == '-'){ start = !start; s_num = i; }
            else if(str.at(i) == ' '){ continue; }
            else{ break; }
        }
        if(length > 10){ break; }
    }
    // cout<<"s_num: "<<s_num<<" str.at(i): "<<str.at(s_num)<<" ans: "<<ans<<endl;
    if(str.at(s_num) == '-'){ ans *= (-1); }

    if(ans >= 2147483647){ return 2147483647; }
    else if(ans < -2147483647){ return -2147483648; }
    else{ return ans; }
}

void StringtoInteger_atoi::test(){ cout<<myAtoi(str)<<endl; }