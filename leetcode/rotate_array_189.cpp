#include<iostream>
using namespace std ;


void rotate(int arr[],int k , int n){
     
    int str = 0;
    int end = n- 1;
    while(str<=k && end>=k ){
        swap(arr[str],arr[end]);
        str++;
        end--;
    }
    
    


}
int main(){
    int even[4]={-1,100,1,1000};
    int odd [5]={1,2,4,5,6 } ;

    rotate(even,2,4);

    for(int i=0 ; i<4 ; i++){
        cout<<even[i]<<" ";
    }

    rotate(odd,3,5);

    for(int i=0 ; i<5; i++){
        cout<<odd[i]<<" ";
    }

}