#include<iostream>
using namespace std;

void sum(int arr[],int len){
    int sum = 0;
    for (int i =0;i<len;i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}

int main(){

int arr[5] = {1, 2, 3, 4, 5};
int len = 5;
sum(arr,len);
    return 0;
}