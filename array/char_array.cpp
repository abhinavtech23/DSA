#include <iostream>
using namespace std;




//converting uppercase letter to lowercase
char lowercase(char ch){
    if (ch>='a'&& ch<='z'){

        return ch;
    }
    else {
        char temp=ch -'A'+'a';  //uppercase krne ke liye = ch-'a'+'A'
        return temp;
    }
}


// checking palindrome 
bool palindrome(char name[], int size){
    int s= 0;
    int e = size -1;
    while (s<=e){
        if (lowercase(name[s])!= lowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}

//reversing the array (leetcode question 344)
void revers(char name[] , int size){
    int s =0;
    int e = size-1;
    while(s<e){
        swap(name[s] , name[e]);
        s++;
        e--;

    }
        
    
}


// finding the length of character array
int lengthofstring(char name[]){
    int count =0 ;
    for(int i= 0 ; name[i] !='\0' ;i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin >> name;
    
    int len = lengthofstring(name);
    cout<<"palindrome or not "<<palindrome(name , len);



    char a ='S';
   
    cout << lowercase(a) ;
}