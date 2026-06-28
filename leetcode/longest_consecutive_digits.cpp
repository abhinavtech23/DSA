#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;


int longestConsecutive(vector<int>& nums) {       //solved using 30-40 percent using ai because of tle.
    unordered_set<int> st(nums.begin(), nums.end());

    int longest = 0;

    for (int num : st) {
        if (st.find(num - 1) == st.end()) {
        int current = num;
        int length = 1;

        while (st.find(current + 1) != st.end()) {
            current++;
            length++;
        }

        longest = max(longest, length);
        }
    }

    return longest;


}


//my brut force approach;
int longestconno(vector<int>& nums){

}

int main(){
    
}


