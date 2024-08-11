#include<bits/stdc++.h>
using namespace std;
// void removeChar(string s,string name){
//     if(name.length()==0){
//         cout<<s;
//         return;
//     }
//     char ch = name[0];
//     if(ch =='a' || ch=='A') removeChar(s,name.substr(1));
//     else removeChar(s+ch,name.substr(1));
// }
// First method has more space complexity as each time a substr is created space is consumed
void removeChar(string s,string name,int idx){
    if(name.length()==idx){
        cout<<s;
        return;
    }
    char ch = name[idx];
    if(ch =='a' || ch=='A') removeChar(s,name,idx+1);
    else removeChar(s+ch,name,idx+1);
}
int main(){
   removeChar("","Aditya Kumar",0);
}