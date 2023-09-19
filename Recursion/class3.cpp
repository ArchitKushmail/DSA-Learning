#include<iostream>
using namespace std;
bool binarySearch(int *arr , int s , int e , int key){

// Base Case
    if(s>e){
        return false; // Happens when element is not present.
    }
    int mid = s + (e-s)/2;
    
    if(arr[mid]==key){
        return true; // Happens when element is found. 
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }else if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }

}

int main(){
    int arr[5] = {3,5,1,2,6};
    int key = 10;
    int s = 0;
    int e = 4;
    bool ans = binarySearch(arr,s,e,key);
    cout<<ans;
    return 0;
}