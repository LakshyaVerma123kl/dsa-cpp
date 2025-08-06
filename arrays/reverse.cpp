#include<iostream>
using namespace std;

void revarr(int arr[],int len){

    int start =0;
    int end = len-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarr(int arr[],int len){

    for(int i = 0;i<len;i++){

        cout<<arr[i]<<" ";

    }

}

int main(){

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int arr1[5]= {1, 2, 3, 4, 5};
int len = sizeof(arr)/sizeof(arr[0]);

revarr(arr1,5);
printarr(arr1,5);
    return 0;
}