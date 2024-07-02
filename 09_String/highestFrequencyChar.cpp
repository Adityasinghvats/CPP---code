#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// Count the charcter with maximum occurance in string
int main(){
    // string s =  "physicswallah";
    // int max = 0;
    // for(int i=0;i<s.length();i++){
    //     char ch = s[i];
    //     int count = 1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(count>max) max=count;
    // }
    // for(int i=0;i<s.length();i++){
    //     char ch = s[i];
    //     int count = 1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(count==max){
    //         cout<<ch<<" "<<max<<endl;
    //     }
    // }
    // Using special array of size 26 where each index is mapped to a charcter
    string s = "leetcode";
    int max = 0;
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii-97]++;
    }
    for(int i=0;i<s.length();i++){
        if(v[i]>max) max = v[i];
    }
    for(int i=0;i<s.length();i++){
        if(v[i]==max){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max;
        }
    }
    return 0;
}