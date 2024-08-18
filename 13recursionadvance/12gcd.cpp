#include<bits/stdc++.h>
using namespace std;
// By euclid division method
int findgcd2(int minnum,int maxnum){
    if(minnum==0) return maxnum;
    else return findgcd2(maxnum%minnum,minnum);
}

// By simple iterative method with TC = O(min(a,b))
// int findGCD(int num1,int num2,int min){
//     if(min<2) return 1;
//     if(num1%min==0 && num2%min==0){
//         return min;
//     }
//     findGCD(num1,num2,min-1);
// }

int main(){
    int num1 = 8;
    int num2 = 12;

    // int smallnum = (num1<num2) ? num1 : num2;

    // int gcdvalue = findGCD(num1,num2,min(num1,num2));

    // int gcdvalue = findgcd2(min(num1,num2),max(num1,num2));
    // Number can be given in any order because a%b = a (if a<b)
    int gcdvalue = findgcd2(num1,num2);
    if(gcdvalue==1) cout<<"No common divisor other than 1";
    else cout<<"Common divisor is: "<<gcdvalue<<endl;
}