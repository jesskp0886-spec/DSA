#include<iostream>
using namespace std;

int main(){

    int n, j;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the element : "<< endl;
    for(int i = 0; i < n; i++){
        cout << "Index of [" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array list : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Leaders of Array : ";
    for(int  i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                break;
            }
        }
        if(j == n){
            cout << arr[i] << " ";
        }
    }
    return 0;
}