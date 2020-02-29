#include "./header/7.h"

ReverseInteger::ReverseInteger(){
    // x = 123;
    // x = -123;
    // x = -120;
    // x = 0;
    x = 1534236469;
    /*
        int: -2147483648 〜 2147483647
    */
}

ReverseInteger::~ReverseInteger(){}

int ReverseInteger::reverse(int x){
    if(x == 0){ return x; }

    while(x % 10 == 0){ x /= 10; }

    string str = to_string(x);
    string temp = "";

    int i = str.size() - 1;

    while(0 < i){ temp += str.at(i); i--;}
    
    bool positive = true;

    if(str.at(i) == '-'){ positive = !positive; }
    else{ temp += str.at(i); }
    
    long long int ans = 0;
    
    for(int i = 0; i < temp.size(); i++){ ans = ans*10 + (long long int)(temp.at(i) - '0'); }
    
    
    if(ans > 2147483647){ return 0; }

    if(!positive){ ans *= (-1); }

    return ans;
}

void ReverseInteger::test(){ cout<<reverse(x)<<endl; }