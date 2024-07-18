#include<bits/stdc++.h>
using namespace std;
int main(){
    // Unique and sorted order
    set<int>st;
    st.push(2);
    st.push(3);
    st.emplace(9);


    auto it = st.find(2);
    auto it = st.find(8);
    // In this case when it is not found it will point to end()

    int mn = st.count(9);

    auto it = st.upper_bound(2);
    auto it = st.lower_bound(2);

    // Everything happens in log N

    //multiset where elemnt is sorted but not unique
    multiset<int> ms;

    ms.push(2);
    ms.push(2);
    ms.push(2);
    ms.push(2);

    // ms.erase(2); it erases all instance of 2

    ms.erase(ms.find(2)+2);
    // it deletes 2 at third instance of 2


    unordered_set<int> us;
    // Not sorted O(1) complexity
    // Once in a lifetime it will take O(n)
}
