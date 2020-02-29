#include "./header/5.h"

LongestPalindromicSubstring::LongestPalindromicSubstring(){
    s = "babad";
    // s = "cbbd";
    // s = "a";
    // s = "bb";
}

LongestPalindromicSubstring::~LongestPalindromicSubstring(){
}

string LongestPalindromicSubstring::BruteForce(string s){
    
}

string LongestPalindromicSubstring::Manacher(string s){

    if(s.length() <= 1){
        return s;
    }

    int LENGTH = ((s.length() * 2) + 3);
    int j = 0;

    string str = "";
    
    for(int i = 0; i < LENGTH; i++){
        
        string temp;

        if(i == 0){ temp = "@"; }
        else if(i == (LENGTH - 1)){ temp = "$"; }
        else if(i % 2 == 1){ temp = "#"; }
        else{ temp = s.at(j); j++; }

        str = str + temp;
    }
    /*
    for(int i = 0; i < LENGTH; i++){
        cout<<str.at(i)<<" ";
    }
    cout<<endl;
    */
    int right = 1;
    int center = 1;
    int max_key = 0;
    int max_value = 0; 
    int k = 1;
    
    int P[LENGTH] = {};

    for(int i = 1; i < LENGTH - 1; i++){
        
        int mirr = (2 * center - i);
        
        if(i < right){ P[i] = min(right - i, P[mirr]); }
        
        while(str.at(i - (1 + P[i])) == str.at(i + (1 + P[i]))){
            P[i]++;
        }

        if((i + P[i]) > right){
            center = i;
            right = i + P[i];
        }

        if(max_value < P[i]){
            max_key = i;
            max_value = P[i];
        }
    }

    string ans = "";

    int l = 0;
    
    string temp;
    
    if(str.at(max_key) != '#'){ temp = str.at(max_key);}
    
    ans = ans + temp;
    l++;
    
    for(int j = 0; j < max_value; j++){
        if(str.at(max_key - l) != '#' && str.at(max_key + l) != '#'){ 
            temp = str.at(max_key - l);
            ans = temp + ans;
            temp = str.at(max_key + l);
            ans = ans + temp;
        }
        l++;
    }
    /*
    for(int i = 0; i < LENGTH; i++){
        cout<<str.at(i)<<" ";
    }
    cout<<endl;
    for(int i = 0; i < LENGTH; i++){
        cout<<P[i]<<" ";
    }
    cout<<endl;
    
    cout<<"max_key: "<<max_key<<" max_value: "<<max_value<<endl;
    */
    return ans;
}

string LongestPalindromicSubstring::longestPalindrome(string s){
    // return BruteForce(s);
    return Manacher(s);
}

void LongestPalindromicSubstring::test(){ cout<<longestPalindrome(s)<<endl; }