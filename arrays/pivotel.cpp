#include<iostream>
using namespace std;

int piv(int arr[], int len){
    int s = 0;
    int e = len-1;
    int mid = s+(e-s)/2;

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

int main(){

    int arr[5] = {7,9,10,1,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<piv(arr, len);
    return 0;
}