#include<iostream>
using namespace std;
int binarytoDecimal(string &binary){
    int len = binary.size();
    int result = 0;
    for(int i=len-1;i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';
        result += num*(1 << (len-i-1));
    }
    return result;
}

string decimaltoBinary(int num){
    string result = "";
    while(num>0){
        if(num % 2 == 0){
            //even
            result = "0" + result;
        }else{
            //odd
            result = "1" + result;
        }
        num = num / 2;
    }
    return result;
}

int main(){
    string str = "00001010";
    // cout<<binarytoDecimal(str);

    int num = 12;
    cout<<decimaltoBinary(num);
}