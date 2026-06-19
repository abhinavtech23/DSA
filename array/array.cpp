#include <iostream>
using namespace std;

//insertion sort using for loop 
void insertionsort1(int arr[], int size){
    for(int i = 1 ; i<size ; i++){
        int temp = arr[i];
    
        int j= i-1;
        for( ; j>=0 ; j--){
            if(arr[j]>temp){
                arr[j+1]= arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
    }
}



// bubble sorting 
void bubblesort(int arr[],int size){
    for(int i =1 ; i<size ; i++){
        bool swapped = false;
        for (int j = 0 ; j<size -i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }

    }




}
//selection sorting in an array 
void selectionsort(int arr[], int size){
    for (int i =0 ; i< size-1 ; i++){
        int minIndex = i ;
        for(int j=i+1 ; j<size ; j++){
            if(arr[j]<arr[minIndex]){  //asending and descending depends on this this condition
                minIndex = j;
            }

        }
        swap(arr[minIndex],arr[i]);
    } 
      
}

//get pivot in an array (small) 
int getpivot(int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;

        }
        else{
            e=mid;

        }
        mid = s+(e-s)/2;
    } 
    return s;

}




//alternating element reverse
int ralter(int arr[], int size ){
    for (int i=0 ; i<size-1 ; i+=2){
        
        swap(arr[i],arr[i+1]);
    }
}


//sum of array
int sumofarray(int arr[],int size){
    int sum = 0;
    for(int i=0; i<=size-1 ;i++){
        sum+=arr[i];
    }
    cout << "the sumof the array is "<< sum << endl;



}





//binary search for descending array 
int binarysearchfordes(int arr[] , int size, int key) {
    int start = 0;
    int end = size -1 ;
    int mid = (start + end)/2 ;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if( key > arr[mid]){
            end = mid -1 ;

        }
        else{
        start = mid +1 ;
        }
        mid = (start + end)/2 ;


    

    }
    return -1;

}


//binary search for ascending array
int binarysearchforaes(int arr[] , int size, int key) {
    int start = 0;
    int end = size -1 ;
    int mid = (start + end)/2 ;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if( key > arr[mid]){
            start =mid+1;

        }
        else{
        end = mid -1 ;
        }
        mid = (start + end)/2 ;
    }
}





int main(){
    int arr[6] = { 9,3,5,2,1,0};
    int arr2[5]= {30,13,12,11,10 };

    
    
    
    
    
        
    

}
