#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];


    cout << "Enter the element :" << endl;
    for(int i = 0; i < n; i++){
        cout << "Index of [" << i << "]  : ";
        cin >> arr[i];
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k < n - 1; k++){
                    arr[k] = arr[k  + 1];  
                }
                n--;
                j--;
            }
        }
    }

    cout << "After remove duplicate :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}