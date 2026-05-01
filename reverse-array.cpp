#include<iostream>
using namespace std;

int main(){

    int n, temp;

    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];

    cout << "Enter array elements :"<< endl;
    for(int i  = 0; i < n; i++){
        cout << "Index of [" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Entered Array :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    cout << "Reversed Array :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


    return 0 ;
}