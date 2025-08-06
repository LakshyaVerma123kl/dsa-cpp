#include<iostream>
using namespace std;

void bin(int arr[],int key,int len){
 int start = 0;
 int end = len -1;
 while(start<=end){
    int mid = (start+end)/2;
    if(key==arr[mid]){
        cout<<"The key is at index "<<mid;
        return;
    }
    else if(key>arr[mid]){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
 }
 cout << "Key not found in the array." << endl;
}

int main()
{
    int arr[5]= {1, 2, 3, 4, 5};
    int key = 5;
    int len = sizeof(arr)/sizeof(arr[0]);
    bin(arr,key,len);
    return 0;
}