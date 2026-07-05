#include<iostream>
using namespace std;


//row wise sum  ----
void printrowsum(int arr[3][4],int row , int col ){
    for (int i=0 ; i<row ; i++){
        int sum =0;
        for (int j=0; j<col ; j++){
            sum +=arr[i][j];

        }
        cout<< sum << endl;
    }

}

// searching element 
bool searchit(int arr[3][4],int target,int m , int n){
    for(int i=0 ; i<3 ; i++){
        for(int j =0 ; j<4 ; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];

    //taking input of the element -- Row wise
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ;j<4 ;j++){
            cin>>arr[i][j];        //agr phela loop cloumn ke liye chala de or dusra row ke liye toh input cloumn wise lega
        }
    }


    //printing the array
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ;j<4;j++){
            cout << arr[i][j] <<" ";;     //same cheez agr output me krte h toh 3x4 ki array 4x3 ki ho jaegi
        }
        cout << endl;
    }
   

    cout<<"enter the element you want to search";
    int target;
    cin>>target;

   if ( searchit(arr ,target , 3 ,4 ) ){
    cout<<"found the element";
   }
   else{
    cout << "not found ";

    

   }
   cout <<"the sum of the elements row wise is  " << endl;
    printrowsum( arr , 3 ,4);
}