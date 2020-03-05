#include "./header/9.h"

PalindromeNumber::PalindromeNumber(){
    // x = 121;
    // x = -121;
    x = 10;
}

PalindromeNumber::~PalindromeNumber(){}

bool PalindromeNumber::isPalindrome(int x){
    if(x < 0){ return false; }
    if(x < 10){ return true; }

    // const char *s = to_string(x).c_str();
    /*
    string temp = to_string(x); 
    vector<char> s(temp.begin(), temp.end());
    
    for(int i = 0; i <= ((s.size() - 1) / 2); i++){
        if(s[i] != s[s.size() - i - 1]){ return false; }
    }
    */
    string s = to_string(x);

    for(int i = 0; i <= ((s.size() - 1) / 2); i++){
        if(s.at(i) != s.at(s.size() - i - 1)){ return false; }
    }
    

    return true;
}

void PalindromeNumber::test(){ cout<<isPalindrome(x)<<endl; }

/*
vector<char> vector{'H', 'e', 'l', 'l', 'o'};
string s;

s.insert(s.begin(), vector.begin(), vector.end())
*/