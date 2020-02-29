#include "./header/6.h"

ZigZagConversion::ZigZagConversion(){

    // s = "PAYPALISHIRING";
    // numRows = 3;
    s = "PAYPALISHIRING";
    numRows = 4;

}

ZigZagConversion::~ZigZagConversion(){
}

string ZigZagConversion::mine(string s, int numRows){
    int height = numRows;
    int width = 0;
    int LENGTH = s.length();

    if(LENGTH <= numRows || numRows <= 1){ return s; }

    while(true){
        LENGTH -= numRows;
        width++;
        if(LENGTH <= 0){ break; }

        int temp = numRows - 2;
        while(temp > 0){
            LENGTH--;
            width++;
            temp--;
            if(LENGTH <= 0){ break; }
        }
        if(LENGTH <= 0){ break; }
    }

    cout<<"height: "<<height<<" width: "<<width<<endl;
    
    vector<vector<char>> table(height, vector<char>(width, '#'));

    LENGTH = s.length();

    int i = 0;
    int x = 0;
    int y = 0;

    while(true){

        int temp = numRows;
        while(temp > 0){
            // cout<<"x: "<<x<<" y: "<<y<<" LENGTH: "<<LENGTH<<endl;
            table.at(y).at(x) = s.at(i);
            LENGTH--;
            temp--;
            i++;
            if(LENGTH <= 0){ break; }
            y++;
        }
        if(LENGTH <= 0){ break; }

        y--;
        y--;
        x++;
        temp = numRows - 2;
        while(temp > 0){
            table.at(y).at(x) = s.at(i);
            LENGTH--;
            temp--;
            i++;
            // cout<<"x: "<<x<<" y: "<<y<<" LENGTH: "<<LENGTH<<endl;
            if(LENGTH <= 0){ break; }
            y--;
            x++;
        }
        if(LENGTH <= 0){ break; }
    }

    string ans = "";

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(table.at(i).at(j) != '#'){
                string t;
                t = table.at(i).at(j);
                ans = ans + t;
            }
        }
    }
    /*
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(table.at(i).at(j) != '#'){ cout<<table.at(i).at(j); }
            else{ cout<<" "; }
        }
        cout<<endl;
    }
    */
    cout<<"ans: "<<ans<<endl;
    return ans;
}

string ZigZagConversion::SortbyRow(string s, int numRows){
    
    return s;
}

string ZigZagConversion::VisitbyRow(string s, int numRows){
    
    return s;
}

string ZigZagConversion::convert(string s, int numRows){
    // return mine(s, numRows);
    return SortbyRow(s, numRows);
    // return VisitbyRow(s, numRows);
}

void ZigZagConversion::test(){
    // string output = "PAHNAPLSIIGYIR";
    string output = "PINALSIGYAHRPI";

    if(convert(s, numRows) == output){ cout<<"Got it!"<<endl; }
    else { cout<<"Wrong"<<endl; }
}