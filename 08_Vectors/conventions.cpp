#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // v[0] = 10;
    v.push_back(9);
    // If size is not given v[0] = 9 will give segmentatiokn fault
    // Then we can use push_back else use index
    // Dont use [] generally
    // [] can be used to access/modify number after push back is done
    cout<<v[0]<<endl;
    return 0;
}