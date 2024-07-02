#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string details = "Aditya Kumar  is Aditya Kumar, teacher of teacher teacher";
    stringstream str(details);
    // Make a vector
    vector<string> v;
    string temp;
    while (str>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // Sort kr diye hain isliye har ek word se compare nhi krege sirf ek piche k word se krege
    int maxC = 1;
    int count =1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }else count=1;
        maxC = max(maxC,count);
    }
    cout<<maxC<<endl;
    count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }else count=1;
        if(count==maxC){
            cout<<v[i]<<endl;
        }
    }
   
}