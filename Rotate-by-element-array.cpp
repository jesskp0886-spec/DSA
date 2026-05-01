#include<iostream>
using namespace std;

int main(){

    int n, pos, temp;
    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];

    cout <<"Enter the element :"<< endl;
    for(int i = 0; i < n; i++){
        cout << "Index of [" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout <<"Enter Position to Rotate : ";
    cin >> pos;

    for(int i = 0; i < pos; i++){
        temp = arr[0];
        for(int j = 0; j < n - 1; j++){
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    cout << "Rotated Array : ";
    for(int  i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    
    return 0;
}