#include<iostream>
#include<string>
using namespace std;

#include<sstream>


string reverse_string(string s){
    istringstream iss(s);
    string word;
    while (iss>>word){ 

    }     

    int n = s.length();
    string rev;
    int i = n - 1;          // end se start karo
    while(i >= 0){
        rev.push_back(s[i]);
        i--;
    }
    return rev;
}

int main(){
    string s;
    cout << "enter string" << endl;
    getline(cin, s);
    cout << "the reverse string is" << endl;
    cout << reverse_string(s);
}