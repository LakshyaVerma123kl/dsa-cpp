#include<iostream>
using namespace std;

void incha(int arr[],int len){

    int start = 0;
    while(start+1<len){
    swap(arr[start],arr[start+1]);
    start = start +2;
}
}

void printarr(int arr[],int len){

    for(int i = 0;i<len;i++){

        cout<<arr[i]<<" ";

    }

}

int main(){

    int arr[5]={1,2,3,4,5};
    int len =sizeof(arr)/sizeof(arr[0]);
    incha(arr,len);
    printarr(arr,len);
    return 0;
}