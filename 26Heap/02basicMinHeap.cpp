#include<bits/stdc++.h>

using namespace std;
using Pair = pair<int,int>;
int main(){
    priority_queue<Pair, vector<Pair>, greater<Pair>> min;
    min.push({10, 4});
    min.push({2, 20});
    min.push({8, 5});
    min.push({9, 12});
    while(!min.empty()){
        Pair topele = min.top();
        cout<<topele.first<<","<<topele.second<<endl;
        min.pop();
    }
}
/*

*/