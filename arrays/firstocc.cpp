#include<iostream>
using namespace std;

void firstocc(int arr[],int len,int key){
    int start = 0;
    int end = len-1;
    int ans;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;;
        }
        else if(arr[mid]>key){
            end= mid-1;    
        }
        if(arr[mid]<key){
            start =  mid+1;    
        }
    }
    cout<<ans;
}

int main(){

int a[5] = {3, 2, 3, 4, 3};
int len = sizeof(a)/sizeof(a[0]);
int key = 3;
    firstocc(a,len,key);
    return 0;
}