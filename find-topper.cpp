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

    
    int largest = arr[0];
    int second = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] != largest){
            if(arr[i] > second){
                second = arr[i];
            }
        }
    }
    
    cout << "Largest Element :" << largest << endl;
    cout << "Second Largest Element :" << second << endl;
    return 0;
}