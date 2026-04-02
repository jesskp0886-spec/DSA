#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];

    cout << "Enter array element :"<< endl;
    for(int i = 0; i < n; i++){
        cout << "Index of ["<< i <<"] is : ";
        cin >> arr[i];
    }

    cout << "Entered array :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After remove element array :";
    for(int i = 0; i < n; i++){
        bool found = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                found = true;
                break;
            }
        }
        if(!found)
            cout << arr[i] << " ";
    }
    return 0;
}