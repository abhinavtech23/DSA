#include<iostream>
using namespace std;

string reverseit(string s){
    int n = s.length();
    int st = 0;
    int end = n-1;
    while(st<=end){
        if(s[st]=' '){
            st++;
        }
        else if(s[end]=' '){
            end--;
        }
        else{
            swap(s[st],s[end]);
            return s;
        }
    }

}




int main(){
    string s;
    cout <<"enter the string "<<endl;
    cin>>s;
    cout << reverseit(s)<<endl;

}