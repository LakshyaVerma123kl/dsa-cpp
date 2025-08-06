#include<iostream>
using namespace std;

void prin(int arr[],int length){
    for(int i =0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void max(int arr[], int len){
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
   cout<<max;
}

void min(int arr[], int len){
    int min = arr[0];
    for(int i = 0; i<len;i++){
    if(min>arr[i]){
        min = arr[i];
    }
}
    cout<<min;
}

int main(){

    int numbers[5];
    int len = sizeof(numbers)/sizeof(numbers[0]);
    for(int i = 0; i<len;i++){
        cout<<"Enter the value for index "<<i<<endl;
        cin>>numbers[i];
    }

    prin(numbers,len);
    cout<<"the maximum value is : ";
    max(numbers,len);
    cout<<endl<<"the minimum value is : ";
    min(numbers,len);
    return 0;
}