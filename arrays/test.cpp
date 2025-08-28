#include<iostream>
using namespace std;

void bin(int arr[],int key,int len){
    int start = 0;
    int end = len-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==key){
            cout<<"At index: "<<mid;
            break;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    bin(arr,key,len);
    return 0;
}