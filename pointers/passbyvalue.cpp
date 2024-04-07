#include<iostream>
using namespace std;
void indexOfFirstAndLast(string s, char ch,int *first,int* last){
    for(int i =0; i < s.size();i++){/* s.size is opertor used on string to get its size*/
        if(s[i] == ch){
            *first = i;/*storing the index in first pointer*/
            break;
        }
    }
    for(int i = s.size();i>=0;i--){
        if(s[i] == ch){
            *last = i;
            break;
        }
    }
}
int main(){
    string s = "aabacab";
    char ch = 'a';
    int first = -1;
    int last = -1;
    indexOfFirstAndLast(s,ch,&first,&last);
    cout<<first<<" "<<last<<endl;
    int *pf = &first;
    int *pl = &last;
    indexOfFirstAndLast(s,ch,pf,pl);
    cout<<*pf<<" "<<*pl;
    return 0;
}