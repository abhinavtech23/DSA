//merge sorted arrays ;

#include<iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i =0 , j=0  , k=0 ;
    int arr3[n+m]= {};


    while (i<n && j<m){
        if(nums1[i]>nums2[j]){
            arr3[k]=nums2[j];
            j++;
            k++;

            
        }
        else{
            arr3[k]=nums1[i];
            i++;
            k++;
        }
        
    }
    while(i<n){
        arr3[k]=nums1[i];
        k++;
        i++;
    }
     while(j<m){
        arr3[k]=nums2[j];
        k++;
        j++;
    }

for(int i =0 ; i<n+m ;i++){
    cout << arr3[i]<<" ";
}


}
int main(){
    int nums1[5]={1,2,3,4,5};
    int nums2[4]={1,3,4,7};
    




}
