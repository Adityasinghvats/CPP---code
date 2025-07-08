#include<bits/stdc++.h>
using namespace std;
//LC 480

double getMedian(priority_queue<int>& left, priority_queue<int, vector<int>, greater<int>>& right, int x, int y){
    int totalSize = x+y;
    if(totalSize % 2 != 0){
        //odd
        return right.top();
    }else{
        //even
        return (left.top()+right.top()) / 2.0;
    }
}

bool isBalanced(int x, int y){
    return (x==y) or (x+1==y);
}

vector<double> sliding_median(vector<int> &arr, int n, int k){
    //find median for each subarray of k length
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    int x=0, y=0;
    right.push(arr[0]);
    y++;
    for(int i=1; i<k; i++){
        int curr = arr[i];

        //median of window of length k
        double median = getMedian(left, right, x, y);
        if(curr<median){
            //go left
            left.push(curr);
            x++;

            //not balanced then take top from left and put it into right
            if(!isBalanced(x,y)){
                int removed = left.top();
                left.pop();
                right.push(removed);
                x--; y++;
            }
        }else{
            //go right
            right.push(curr);
            y++;

            //not balanced then take top from right and put it into left
            if(!isBalanced(x,y)){
                int removed = right.top();
                right.pop();
                left.push(removed);
                x++; y--;
            }
        }
    }
    double m = getMedian(left, right, x, y);//for first k sized window

    //collection of medians for all K sized windows
    vector<double> ans;
    ans.push_back(m);
    unordered_map<int, int> mp;

    //find for other windows after the first windows
    for(int i=k; i<n; i++){
        int newElementIndex = i;
        int oldElementIndexToDelete = i - k;
        double med = getMedian(left, right, x, y);

        if(arr[newElementIndex]>med){
            //go right
            right.push(arr[newElementIndex]);
            y++;
            if(!isBalanced(x,y)){
                int removed = right.top();
                right.pop();
                left.push(removed);
                x++; y--;
            }
        }else{
            left.push(arr[newElementIndex]);
            x++;
            if(!isBalanced(x,y)){
                int removed = left.top();
                left.pop();
                right.push(removed);
                y++; x--;
            }
        }
        //make sure old element is not on top, then we need to delete it
        //if not we can put it into a map with its index to lazily delete
        mp[arr[oldElementIndexToDelete]] = oldElementIndexToDelete;
        //removeOldElement
        while(!left.empty() and mp.count(left.top())){
            mp.erase(left.top());
            left.pop();
            x--;
            //balance again beacuse 1 element was removed from left
            if(!isBalanced(x,y)){
                int removed = right.top();
                right.pop();
                left.push(removed);
                y--; x++;
            }
        }
        while(!right.empty() and mp.count(right.top())){
            mp.erase(right.top());
            right.pop();
            y--;
            //balance again
            if(!isBalanced(x,y)){
                int removed = left.top();
                left.pop();
                right.push(removed);
                y++; x--;
            }
        }
        ans.push_back(getMedian(left, right, x, y));
    }
    
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<double> ans = sliding_median(arr, n, k);
    for(auto ele: ans){
        cout<<ele<<" ";
    }
    return 0;
}
// 8 
// 3
// 1 3 -1 -3 5 3 6 7