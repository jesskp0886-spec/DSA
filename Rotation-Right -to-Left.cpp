#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];

    cout << "Enter the element :" << endl;
    for(int i = 0; i < n; i++){
        cout << "Index of "<< i <<" : ";
        cin >> arr[i];
    }

    cout << "Entered Array : " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n-1; i++){
        for(int j=0; j < n-1-i; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Rotated Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}