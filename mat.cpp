#include "mat.hpp"
#include <string>
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

namespace ariel{

// string revers(string s){
//     string str= reverse(s.begin(),s.end());
//     cout>> str;
//     return str;
// }
string revers(string s){
    // string ss="";
    std::string ss;
    for(int i=0; i<s.length();i++){
        char temp = s[s.length()-i-1];
        // cout<< temp <<endl;
        ss+= temp;
    }
    return ss;
}


string torow(int row, int index, char c1, char c2){

    // string str="";
    std::string str;
    int mid= row- index*2; //mid= chars at the midel of row
    for(int i=0; i<mid; i++){
        if (index%2==0){
            str+= c1;}
        else{
            str+= c2;}
    }
    // cout<< str <<endl;
    // string sifa="";
    std::string sifa;
    for(int i=0; i<index && i*2<row; i++){
        if (i%2==0){
            sifa+= c1;}
        else{
            sifa+= c2;}
        
    }
    if(sifa.length()*2>row){
        str= sifa+ str+ revers(sifa).erase(0,1);
    }
    else{
        str= sifa+ str+ revers(sifa);// revers(sifa)
    }
    // cout<< str <<endl;
    return str;
    
}

string mat(int row, int col, char c1, char c2){

    if (row<1 || col<1 || row%2==0 || col%2==0){
        throw std::domain_error("sorry, we cannot make a rug as you wish");
    }
    int const num1= 126;
    int const num2= 33;
    if (c1 < num2 || num1 < c1 || c2 < num2 || num1 < c2){
        throw std::domain_error("sorry, we cannot make a rug as you wish");
    }
    // string str="";
    std::string str;
    std::string help;
    int mid= (col-1)/2;
    str= torow(row, mid, c1, c2)+'\n';
    for(int i=mid-1; i>=0; i--){
        string s= torow(row, i, c1, c2)+'\n';
        help= s+str;
        str = help+s;
    }
    return str;
}

}