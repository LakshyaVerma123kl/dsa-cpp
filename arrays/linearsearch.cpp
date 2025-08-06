#include<iostream>
using namespace std;

bool search(int arr[], int len, int key) {
    for(int i = 0; i < len; i++) {
        if(key == arr[i]) {
            cout << "Key is present\n";
            return true;
        }
    }
    cout << "Key is not present\n";
    return false;
}

int main() {
    int arr[10] = {5, 7, -3, 4, 1, 6, 7, 8, 9, 10};
    int len = 10;
    int key = 1;
    search(arr, len, key);
    return 0;
}
