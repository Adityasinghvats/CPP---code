#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "XYZASVGQY";
    string ans = "";
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            ans.push_back(s[i]);
        }
    }
    cout<<ans.substr(0,2);
    int n = ans.length();
    for(int i=0;i<n-1;i++){
        // if(sorted_or_not(arr,n)) break;

        bool sorted = true;
        for(int j=0;j<n-1-i;j++){
            if(ans[j]>ans[j+1]){
                swap(ans[j],ans[j+1]);
                sorted = false;
            }
        }
        if(sorted==true){
            break;
        }
    }
    for(int i=0;i<ans.length();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}