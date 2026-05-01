#include<iostream>
using namespace std;

int main(){

    int n, count = 0;

    cout << "Enter te size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the Element :" << endl;
    for(int i = 0; i < n; i++){
        cout << "Index of [" << i << "] : ";
        cin >> arr[i];
    }

    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n - i -1]){
            count++;
        }
    }
    
    if(count == 0){
        cout << "Array is Palindrome...!";
    }
    else{
        cout << "Array is not Palindrome..! ";
    }

    return 0;
}